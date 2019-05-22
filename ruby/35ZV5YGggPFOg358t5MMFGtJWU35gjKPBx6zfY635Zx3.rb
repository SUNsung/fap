
        
                def collection_method
          :pull_requests_comments
        end
    
            # Builds a user using a Hash that was built from a JSON payload.
        def self.from_json_hash(raw_hash)
          new(Representation.symbolize_hash(raw_hash))
        end
    
        def display_error_message(ex)
      unless options.backtrace
        Rake.application.options.suppress_backtrace_pattern = backtrace_pattern if backtrace_pattern
        trace '(Backtrace restricted to imported tasks)'
      end
    
        def initialize(app)
      @app = app
    end
    
            close_body(body) if reaction
    
        it 'Reads referrer from Host header when Referer header is relative' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => '/valid'}
      expect(subject.referrer(env)).to eq('foo.com')
    end
    
          get '/', {}, 'HTTP_COOKIE' => '_session=EVIL_SESSION_TOKEN; _session=SESSION_TOKEN'
      expect(last_response).not_to be_ok
    end
  end
end
