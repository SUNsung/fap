
        
        require 'helper'
    
    # Test if processing content string without any Liquid constructs, via Liquid,
# is slower than checking whether constructs exist ( using `String#include?` )
# and return-ing the 'plaintext' content string as is..
#
# Ref: https://github.com/jekyll/jekyll/pull/6735
    
    # -------------------------------------------------------------------
# Benchmarking changes in https://github.com/jekyll/jekyll/pull/6767
# -------------------------------------------------------------------
    
    CONTENT_CONTAINING = <<-HTML.freeze
<!DOCTYPE HTML>
<html lang='en-US'>
  <head>
<meta http-equiv='Content-Type' content='text/html; charset=UTF-8'>
    <meta charset='UTF-8'>
    <title>Jemoji</title>
    <meta name='viewport' content='width=device-width,initial-scale=1'>
    <link rel='stylesheet' href='/css/screen.css'>
  </head>
  <body class='wrap'>
    <p><img class='emoji' title=':+1:' alt=':+1:' src='https://assets.github.com/images/icons/emoji/unicode/1f44d.png' height='20' width='20' align='absmiddle'></p>
    
            # rubocop:disable Metrics/AbcSize
        def process(args, opts)
          if !args || args.empty?
            raise Jekyll::Errors::InvalidThemeName, 'You must specify a theme name.'
          end
    
    
    
      table td.code       {width:750px}
  table td.code div   {width:750px;overflow:hidden}
</style>
</head>
<body>
  <div id='wrap'>
    <div id='header'>
      <img src='<%= env['SCRIPT_NAME'] %>/__sinatra__/500.png' alt='application error' height='161' width='313' />
      <div id='summary'>
        <h1><strong><%=h exception.class %></strong> at <strong><%=h path %>
          </strong></h1>
        <h2><%=h exception.message %></h2>
        <ul>
          <li class='first'><strong>file:</strong> <code>
            <%=h frames.first.filename.split('/').last %></code></li>
          <li><strong>location:</strong> <code><%=h frames.first.function %>
            </code></li>
          <li class='last'><strong>line:
            </strong> <%=h frames.first.lineno %></li>
        </ul>
      </div>
      <div class='clear'></div>
    </div>
    
          def cookie_paths(path)
        path = '/' if path.to_s.empty?
        paths = []
        Pathname.new(path).descend { |p| paths << p.to_s }
        paths
      end
    
        it 'sets a session authenticity token if one does not exist' do
      session = {}
      allow(Rack::Protection::AuthenticityToken).to receive(:random_token).and_return(token)
      allow_any_instance_of(Rack::Protection::AuthenticityToken).to receive(:mask_token).and_return(masked_token)
      Rack::Protection::AuthenticityToken.token(session)
      expect(session[:csrf]).to eq(token)
    end
  end
    
      subject { described_class.new(lambda {}) }