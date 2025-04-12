using System;

class InternalClass
{
    public virtual string Fetch()
    {
        return "get user info";
    }
}

class ExternalClass
{
    public string Search()
    {
        return "get user info";
    }
}

class Adapter : InternalClass
{
    private ExternalClass external;

    public Adapter(ExternalClass ext)
    {
        external = ext;
    }

    public override string Fetch()
    {
        return external.Search();
    }
}

