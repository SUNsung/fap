    end
  end
end

    
          def footer_format
        has_footer && @footer.format.to_s
      end
    
      test 'extracting paths from URLs' do
    assert_nil extract_path('Eye-Of-Sauron')
    assert_equal 'Mordor', extract_path('Mordor/Sauron')
    assert_equal 'Mordor/Sauron', extract_path('Mordor/Sauron/Evil')
  end
    
        @view = Precious::Views::Page.new
    @view.instance_variable_set :@page, page
    @view.instance_variable_set :@content, page.formatted_data
    @view.instance_variable_set :@h1_title, true
    
    def date
  Date.today.to_s
end
    
          def call(env)
        @mg.call(env)
      end
    end
    
    # Rack::Handler does not work with Ctrl + C. Use Rack::Server instead.
    Rack::Server.new(:app => MapGollum.new(base_path), :Port => options[:port], :Host => options[:bind]).start
  end
end

    
    
require 'uri'
require 'cgi'
require File.expand_path(File.join(File.dirname(__FILE__), '..', 'support', 'paths'))
require File.expand_path(File.join(File.dirname(__FILE__), '..', 'support', 'selectors'))
    
        def self.names_for(klass)
      instance.names_for(klass)
    end