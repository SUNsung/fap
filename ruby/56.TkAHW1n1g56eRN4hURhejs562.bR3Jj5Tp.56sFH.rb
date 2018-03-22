
        
            export LANG=en_US.UTF-8
    \e[0m
    DOC
  end
    
            def initialize(argv)
          @pod_name = argv.shift_argument
          @wipe_all = argv.flag?('all')
          super
        end
    
          def plugins_string
        UI::ErrorReport.plugins_string
      end
    
          def update_if_necessary!
        if @update && config.verbose?
          UI.section('\nUpdating Spec Repositories\n'.yellow) do
            Repo.new(ARGV.new(['update'])).run
          end
        end
      end
    
    get '/stream', :provides => 'text/event-stream' do
  stream :keep_open do |out|
    connections << out
    out.callback { connections.delete(out) }
  end
end
    
      %w(GET HEAD).each do |method|
    it 'accepts #{method} requests with non-whitelisted Origin' do
      expect(send(method.downcase, '/', {}, 'HTTP_ORIGIN' => 'http://malicious.com')).to be_ok
    end
  end
    
      # rspec-expectations config goes here. You can use an alternate
  # assertion/expectation library such as wrong or the stdlib/minitest
  # assertions if you prefer.
  config.expect_with :rspec do |expectations|
    # Enable only the newer, non-monkey-patching expect syntax.
    # For more details, see:
    #   - http://myronmars.to/n/dev-blog/2012/06/rspecs-new-expectation-syntax
    expectations.syntax = :expect
  end
    
    module WithinHelpers
  def with_scope(locator)
    locator ? within(*selector_for(locator)) { yield } : yield
  end
end
World(WithinHelpers)
    
        def calculated_type_matches
      possible_types.select do |content_type|
        content_type == type_from_file_contents
      end
    end
    
          class ValidateAttachmentContentTypeMatcher
        def initialize attachment_name
          @attachment_name = attachment_name
          @allowed_types = []
          @rejected_types = []
        end
    
          def invert_add_attachment(args)
        [:remove_attachment, args]
      end
    end
  end
end
