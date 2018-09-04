
        
        gemspec
    
    class BugTest < ActionDispatch::IntegrationTest
  include Rack::Test::Methods
  include Warden::Test::Helpers
    
      # The time the user will be remembered without asking for credentials again.
  mattr_accessor :remember_for
  @@remember_for = 2.weeks
    
          def self.generate_helpers!(routes=nil)
        routes ||= begin
          mappings = Devise.mappings.values.map(&:used_helpers).flatten.uniq
          Devise::URL_HELPERS.slice(*mappings)
        end
    
          if message.is_a?(Symbol)
        options = {}
        options[:resource_name] = scope
        options[:scope] = 'devise.failure'
        options[:default] = [message]
        auth_keys = scope_class.authentication_keys
        keys = (auth_keys.respond_to?(:keys) ? auth_keys.keys : auth_keys).map { |key| scope_class.human_attribute_name(key) }
        options[:authentication_keys] = keys.join(I18n.translate(:'support.array.words_connector'))
        options = i18n_options(options)
    
      platform_is :windows do
    it 'runs commands starting with any number of @ using shell' do
      `#{ruby_cmd('p system 'does_not_exist'')} 2>NUL`.chomp.should == 'nil'
      @object.system('@does_not_exist 2>NUL').should == false
      @object.system('@@@#{ruby_cmd('exit 0')}').should == true
    end
  end
end
    
        it 'returns the time at which the file was created when passed ?C' do
      Kernel.test(?C, @tmp_file).should == @tmp_file.ctime
    end
    
      after :each do
    untrace_var :$Kernel_trace_var_global
    
      it 'returns the method name as symbol' do
    eval(@code, TOPLEVEL_BINDING).should equal :boom
  end
end

    
            self.arguments = [
          CLAide::Argument.new('NAME', false),
        ]
    
            def run
          UI.puts('$CACHE_ROOT: #{@cache.root}') if @short_output
          if @pod_name.nil? # Print all
            @cache.cache_descriptors_per_pod.each do |pod_name, cache_descriptors|
              print_pod_cache_infos(pod_name, cache_descriptors)
            end
          else # Print only for the requested pod
            cache_descriptors = @cache.cache_descriptors_per_pod[@pod_name]
            if cache_descriptors.nil?
              UI.notice('No cache for pod named #{@pod_name} found')
            else
              print_pod_cache_infos(@pod_name, cache_descriptors)
            end
          end
        end
    
        it 'accepts multiline each' do
      expect_no_offenses(<<-RUBY.strip_indent)
        def func
          [1, 2, 3].each do |n|
            puts n
          end
        end
      RUBY
    end
    
          if allow_implicit_return
        expect(cop.offenses.empty?).to be true
      else
        expect(cop.messages)
          .to match_array(start_with('Use `#{method}!` instead of `#{method}`' \
                             ' if the return value is not checked.'))
      end
    end
  end
    
            pairs.map(&:value).each do |value|
          yield value
        end
    
          # Checks whether this node is an `unless` statement. (This is not true
      # of ternary operators and `if` statements.)
      #
      # @return [Boolean] whether the node is an `unless` statement
      def unless?
        keyword == 'unless'
      end