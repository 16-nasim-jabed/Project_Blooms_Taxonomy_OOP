#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;


class blooms_stages 
{
    public:
        vector<string> keywords_Knowledge={"cite", "define", "describe", "identify", "label", "list", "match", "name", "outline", "quote", "recall", "report", "reproduce", "retrieve", "show", "state", "tabulate", "tell"};

         vector<string> keywords_Comprehension={"abstract", "arrange", "articulate", "associate", "categorize", "clarify", "classify", "compare", "compute", "conclude", "contrast", "defend", "diagram", "differentiate", "discuss", "distinguish", "estimate", "exemplify", "explain", "extend", "extrapolate", "generalize", "give examples of", "illustrate", "infer", "interpolate", "interpret", "match", "outline", "paraphrase", "predict", "rearrange", "reorder", "rephrase", "represent", "restate", "summarize", "transform", "translate"};

         vector<string> keywords_Application={"apply", "calculate", "carry out", "classify", "complete", "compute", "demonstrate", "dramatize", "employ", "examine", "execute", "experiment", "generalize", "illustrate", "implement", "infer", "interpret", "manipulate", "modify", "operate", "organize", "outline", "predict", "solve", "transfer", "translate", "use"};

         vector<string> keywords_Analysis={"analyze", "arrange", "break down", "categorize", "classify", "compare", "connect", "contrast", "deconstruct", "detect", "diagram", "differentiate", "discriminate", "distinguish", "divide", "explain", "identify", "integrate", "inventory", "order", "organize", "relate", "separate", "structure"};

        vector<string> keywords_Synthesis={"appraise", "apprise", "argue", "assess", "compare", "conclude", "consider", "contrast", "convince", "criticize", "critique", "decide", "determine", "discriminate", "evaluate", "grade", "judge", "justify", "measure", "rank", "rate", "recommend", "review", "score", "select", "standardize", "support", "test", "validate"};

        vector<string> keywords_Evaluation={"arrange", "assemble", "build", "collect", "combine", "compile", "compose", "constitute", "construct", "create", "design", "develop", "devise", "formulate", "generate", "hypothesize", "integrate", "invent", "make", "manage", "modify", "organize", "perform", "plan", "prepare", "produce", "propose", "rearrange", "reconstruct", "reorganize", "revise", "rewrite", "specify", "synthesize", "write"};
};

class define_blooms_levels
{
    public:
    vector<string> checkKeywordsInInput(const vector<string>& keywords, const string& input) 
    {
    vector<string> foundKeywords;
    for (const auto& keyword : keywords) 
    {
        if (input.find(keyword) != string::npos) 
        {
            foundKeywords.push_back(keyword);
        }
    }
    return foundKeywords;
    }



};

int main()
{
    cout<<"\n\n\n\n";

    cout << "\t\t\t\t        BLOOM'S TAXONOMY           \n";
    cout << "\t\t\t\t|*|==============================|*|\n";
    cout << "\t\t\t\t|*|  _________    ___________    |*|\n";
    cout << "\t\t\t\t|*| |         |  |           |   |*|\n";
    cout << "\t\t\t\t|*| |  Create |  | Evaluate  |   |*|\n";
    cout << "\t\t\t\t|*| |_________|  |___________|   |*|\n";
    cout << "\t\t\t\t|*|  _________    ___________    |*|\n";
    cout << "\t\t\t\t|*| |         |  |           |   |*|\n";
    cout << "\t\t\t\t|*| |  Apply  |  | Analyze   |   |*|\n";
    cout << "\t\t\t\t|*| |_________|  |___________|   |*|\n";
    cout << "\t\t\t\t|*|  _________    ___________    |*|\n";
    cout << "\t\t\t\t|*| |         |  |           |   |*|\n";
    cout << "\t\t\t\t|*| |Understand  | Remember  |   |*|\n";
    cout << "\t\t\t\t|*| |_________|  |___________|   |*|\n";
    cout << "\t\t\t\t|*|==============================|*|\n";

    cout<<"\n\n\n\n";
    cout<<"================================================= WELCOME =================================================\n\n";

    blooms_stages keys;

    string UserInput;

    cout<<" # Ask a Question or write something: \nWrite Here: "<<endl;
    getline(cin, UserInput);

    for (char& c : UserInput) 
    {
        c = tolower(c);
    }

    define_blooms_levels define;
    
    vector<string> found=define.checkKeywordsInInput(keys.keywords_Analysis, UserInput);
    vector<string> found1=define.checkKeywordsInInput(keys.keywords_Application, UserInput);
    vector<string> found2=define.checkKeywordsInInput(keys.keywords_Comprehension, UserInput);
    vector<string> found3=define.checkKeywordsInInput(keys.keywords_Evaluation, UserInput);
    vector<string> found4=define.checkKeywordsInInput(keys.keywords_Knowledge, UserInput);
    vector<string> found5=define.checkKeywordsInInput(keys.keywords_Synthesis, UserInput);

    if (!found.empty()) 
    {
        cout << "Your asked question or writen phrase identify's Analytical level of the bloom's taxonomy \n\n\n =====================Thank You =====================" << endl;
    }

    else if (!found1.empty()) 
    {
        cout << "Your asked question or writen phrase identify's Application level of the bloom's taxonomy \n\n\n =====================Thank You =====================" << endl;
    }

    else if (!found2.empty()) 
    {
        cout << "Your asked question or writen phrase identify's Comprehension level of the bloom's taxonomy \n\n\n =====================Thank You =====================" << endl;
    }

    else if (!found3.empty()) 
    {
        cout << "Your asked question or writen phrase identify's Evaluation level of the bloom's taxonomy \n\n\n =====================Thank You =====================" << endl;
    }

    else if (!found4.empty()) 
    {
        cout << "Your asked question or writen phrase identify's Knowledge level of the bloom's taxonomy \n\n\n =====================Thank You =====================" << endl;
    }

    else if (!found5.empty()) 
    {
        cout << "Your asked question or writen phrase identify's Synthesis level of the bloom's taxonomy \n\n\n =====================Thank You =====================" << endl;
    }

    else
    {
        cout<<"Invalid!! Text or Question. Write a valid syntax"<<endl;
    }

    return 0;
}
