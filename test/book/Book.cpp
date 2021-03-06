#include "Book.h"
#include <iostream>

Book::Book()
{
    static const std::string arr[] = {
        "I",
        "call",
        "this",
        "information",
        "the",
        "scoping",
        "information",
        "One",
        "obvious",
        "place",
        "to",
        "put",
        "it",
        "is",
        "in",
        "the",
        "URI",
        "path",
        "That’s",
        "what",
        "most",
        "web",
        "sites",
        "do",
        "Think",
        "once",
        "again",
        "about",
        "a",
        "search",
        "engine",
        "URI",
        "like",
        "http://www.google.com/search?q=REST",
        "There",
        "the",
        "method",
        "information",
        "is",
        "“GET,”",
        "and",
        "the",
        "scoping",
        "information",
        "is",
        "“/search?q=REST.”",
        "The",
        "client",
        "is",
        "trying",
        "to",
        "GET",
        "a",
        "list",
        "of",
        "search",
        "results",
        "about",
        "REST",
        "as",
        "opposed",
        "to",
        "trying",
        "to",
        "GET",
        "something",
        "else:",
        "say",
        "a",
        "list",
        "of",
        "search",
        "results",
        "about",
        "jellyfish",
        "(the",
        "scoping",
        "information",
        "for",
        "that",
        "would",
        "be",
        "“/search?q=jellyfish”)",
        "or",
        "the",
        "Google",
        "home",
        "page",
        "(that",
        "would",
        "be",
        "“/”)",
        "Many",
        "web",
        "services",
        "put",
        "scoping",
        "information",
        "in",
        "the",
        "path",
        "Flickr’s",
        "is",
        "one:",
        "most",
        "of",
        "the",
        "query",
        "variables",
        "in",
        "a",
        "Flickr",
        "API",
        "URI",
        "are",
        "scoping",
        "information",
        "tags=penguin",
        "scopes",
        "the",
        "flickr.photos.search",
        "method",
        "so",
        "it",
        "only",
        "searches",
        "for",
        "photos",
        "tagged",
        "with",
        "“penguin.”",
        "In",
        "a",
        "service",
        "where",
        "the",
        "method",
        "information",
        "defines",
        "a",
        "method",
        "in",
        "the",
        "programming",
        "language",
        "sense",
        "the",
        "scoping",
        "information",
        "can",
        "be",
        "seen",
        "as",
        "a",
        "set",
        "of",
        "arguments",
        "to",
        "that",
        "method",
        "You",
        "could",
        "reasonably",
        "expect",
        "to",
        "see",
        "flickr.photos.search(tags=penguin)",
        "as",
        "a",
        "line",
        "of",
        "code",
        "in",
        "some",
        "programming",
        "language",
        "The",
        "alternative",
        "is",
        "to",
        "put",
        "the",
        "scoping",
        "information",
        "into",
        "the",
        "entity-body",
        "A",
        "typical",
        "SOAP",
        "web",
        "service",
        "does",
        "it",
        "this",
        "way",
        "Example",
        "1-10",
        "contains",
        "a",
        "q",
        "tag",
        "whose",
        "contents",
        "are",
        "the",
        "string",
        "“REST.”",
        "That’s",
        "the",
        "scoping",
        "information",
        "nestled",
        "conveniently",
        "inside",
        "the",
        "doGoogleSearch",
        "tag",
        "that",
        "provides",
        "the",
        "method",
        "information",
        "The",
        "service",
        "design",
        "determines",
        "what",
        "information",
        "is",
        "method",
        "information",
        "and",
        "what’s",
        "scoping",
        "information",
        "This",
        "is",
        "most",
        "obvious",
        "in",
        "cases",
        "like",
        "Flickr",
        "and",
        "Google",
        "where",
        "the",
        "web",
        "site",
        "and",
        "the",
        "web",
        "service",
        "do",
        "the",
        "same",
        "thing",
        "but",
        "have",
        "different",
        "designs",
        "These",
        "two",
        "URIs",
        "contain",
        "the",
        "same",
        "information",
        "•",
        "http://flickr.com/photos/tags/penguin",
        "•",
        "http://api.flickr.com/services/rest/?method=flickr.photos.search&tags=penguin",
        "In",
        "the",
        "first",
        "URI",
        "the",
        "method",
        "information",
        "is",
        "“GET”",
        "and",
        "the",
        "scoping",
        "information",
        "is",
        "“photos",
        "tagged",
        "‘penguin.’”",
        "In",
        "the",
        "second",
        "URI",
        "the",
        "method",
        "information",
        "is",
        "“do",
        "a",
        "photo",
        "search”",
        "and",
        "the",
        "scoping",
        "information",
        "is",
        "“penguin.”",
        "From",
        "a",
        "technical",
        "standpoint",
        "there’s",
        "no",
        "difference",
        "between",
        "the",
        "two:",
        "both",
        "of",
        "them",
        "use",
        "HTTP",
        "GET",
        "The",
        "differences",
        "only",
        "become",
        "apparent",
        "at",
        "the",
        "level",
        "of",
        "architecture",
        "when",
        "you",
        "take",
        "a",
        "step",
        "back",
        "and",
        "notice",
        "values",
        "for",
        "methodname",
        "like",
        "flickr.photos.delete",
        "which",
        "take",
        "HTTP’s",
        "GET",
        "method",
        "into",
        "places",
        "it",
        "wasn’t",
        "meant",
        "to",
        "go",
        "Another",
        "example:",
        "in",
        "the",
        "Google",
        "SOAP",
        "API",
        "the",
        "fact",
        "that",
        "you’re",
        "doing",
        "a",
        "search",
        "is",
        "method",
        "information",
        "(doGoogleSearch)",
        "The",
        "search",
        "query",
        "is",
        "scoping",
        "information",
        "(q)",
        "On",
        "the",
        "Google",
        "web",
        "site",
        "both",
        "“search”",
        "and",
        "the",
        "value",
        "for",
        "“q”",
        "are",
        "scoping",
        "information",
        "The",
        "method",
        "information",
        "is",
        "HTTP’s",
        "standard",
        "GET",
        "(If",
        "the",
        "Google",
        "SOAP",
        "API",
        "offered",
        "a",
        "method",
        "called",
        "doGoogleSearchForREST",
        "it",
        "would",
        "be",
        "defining",
        "the",
        "method",
        "information",
        "so",
        "expansively",
        "that",
        "you’d",
        "need",
        "no",
        "scoping",
        "information",
        "to",
        "do",
        "a",
        "search",
        "for",
        "REST.)",
        "get"};
    this->chars = std::vector<std::string>(arr, std::end(arr));
}

Book::~Book()
{
}

std::vector<std::string>::iterator Book::begin()
{
    return this->chars.begin();
}

std::vector<std::string>::iterator Book::end()
{
    return this->chars.end();
}