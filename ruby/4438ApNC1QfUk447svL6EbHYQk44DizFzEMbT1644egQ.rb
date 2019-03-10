
        
        module Devise
  module Controllers
    # Provide the ability to store a location.
    # Used to redirect back to a desired path after sign in.
    # Included by default in all controllers.
    module StoreLocation
      # Returns and delete (if it's navigational format) the url stored in the session for
      # the given scope. Useful for giving redirect backs after sign up:
      #
      # Example:
      #
      #   redirect_to stored_location_for(:user) || root_path
      #
      def stored_location_for(resource_or_scope)
        session_key = stored_location_key_for(resource_or_scope)
    
        # Create magic predicates for verifying what module is activated by this map.
    # Example:
    #
    #   def confirmable?
    #     self.modules.include?(:confirmable)
    #   end
    #
    def self.add_module(m)
      class_eval <<-METHOD, __FILE__, __LINE__ + 1
        def #{m}?
          self.modules.include?(:#{m})
        end
      METHOD
    end
    
          def self.required_fields(klass)
        []
      end
    
          it 'displays Float::NAN as NaN' do
        format('%A', Float::NAN).should == 'NaN'
        format('%A', -Float::NAN).should == 'NaN'
      end
    end
  end
    
      it 'has no effect on immediate values' do
    [nil, true, false].each do |v|
      v.taint
      v.tainted?.should == false
    end
  end
    
      it 'raises ArgumentError if no block or proc is provided' do
    lambda do
      trace_var :$Kernel_trace_var_global
    end.should raise_error(ArgumentError)
  end
end

    
    group :debugging do
  gem 'cocoapods_debug'
    
        pod 'ObjCPod', path: 'ObjCPod'
    pod 'SwiftPod', path: 'SwiftPod'
    pod 'MixedPod', path: 'MixedPod'
    pod 'CustomModuleMapPod', path: 'CustomModuleMapPod'
    
      gem.files         = `git ls-files -z`.split('\x0').reject { |f| f =~ /^docs/ }
  gem.executables   = %w(cap capify)
  gem.test_files    = gem.files.grep(%r{^(test|spec|features)/})
  gem.require_paths = ['lib']
    
          # Given a callable that provides a value, wrap the callable with another
      # object that responds to `call`. This new object will perform validation
      # and then return the original callable's value.
      #
      # If the callable is a `Question`, the object returned by this method will
      # also be a `Question` (a `ValidatedQuestion`, to be precise). This
      # ensures that `is_a?(Question)` remains true even after the validation
      # wrapper is applied. This is needed so that `Configuration#is_question?`
      # works as expected.
      #
      def assert_valid_later(key, callable)
        validation_callback = lambda do
          value = callable.call
          assert_valid_now(key, value)
          value
        end
    
    # define charCodeAt on String
class String
  def charCodeAt(k)
    # use scan, nil check, and unpack instead of ord for 1.8
    # 1.9 can simply use self[k].ord
    # http://stackoverflow.com/questions/7793177/split-utf8-string-regardless-of-ruby-version
    c = self.scan(/./mu)[k]
    return nil if c.nil?
    c.unpack('U')[0]
  end
end
    
          def upload_dest
        @upload_dest
      end
    
          def footer_content
        has_footer && @footer.formatted_data
      end
    
        assert_match /Delete this Page/, last_response.body, ''Delete this Page' link is blocked in page template'
    assert_match /New/,              last_response.body, ''New' button is blocked in page template'
    assert_match /Upload/,           last_response.body, ''Upload' link is blocked in page template'
    assert_match /Rename/,           last_response.body, ''Rename' link is blocked in page template'
    assert_match /Edit/,             last_response.body, ''Edit' link is blocked in page template'
    
      test 'clean path without leading slash' do
    assert_equal '/Mordor', clean_path('Mordor')
  end
    
      test 'h1 title sanitizes correctly' do
    title = 'H1'
    @wiki.write_page(title, :markdown, '# 1 & 2 <script>alert('js')</script>' + '\n # 3', commit_details)
    page = @wiki.page(title)
    
      test 'transliteration' do
    # we transliterate only when adapter is grit
    return if defined?(Gollum::GIT_ADAPTER) && Gollum::GIT_ADAPTER != 'grit'
    
          def call(env)
        @mg.call(env)
      end
    end
    
    # Rack::Handler does not work with Ctrl + C. Use Rack::Server instead.
    Rack::Server.new(:app => MapGollum.new(base_path), :Port => options[:port], :Host => options[:bind]).start
  end
end

    
      def self.assets_path
    ::File.expand_path('gollum/public', ::File.dirname(__FILE__))
  end