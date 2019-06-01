
        
              command_return = ActionCommandReturn.new(
        return_value: action_return,
        return_value_type: action_return_type,
        closure_argument_value: closure_argument_value
      )
    
              it '--log-path option is present' do
            result = Fastlane::FastFile.new.parse('lane :test do
                carthage(command: '#{command}', log_path: 'bla.log')
              end').runner.execute(:test)
            expect(result).to eq('carthage build --log-path bla.log')
          end
        end
    
          it 'handles the extensions parameter with no elements correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', extensions: [])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}'')
      end
    
          it 'works with all parameters' do
        result = Fastlane::FastFile.new.parse('lane :test do
            oclint(
              compile_commands: './fastlane/spec/fixtures/oclint/compile_commands.json',
              select_regex: /.*/,
              exclude_regex: /Test.m/,
              report_type: 'pmd',
              report_path: 'report_path.xml',
              max_priority_1: 10,
              max_priority_2: 20,
              max_priority_3: 30,
              thresholds: ['LONG_LINE=200', 'LONG_METHOD=200'],
              enable_rules: ['DoubleNegative', 'DeadCode'],
              disable_rules: ['GotoStatement', 'ShortVariableName'],
              list_enabled_rules: true,
              enable_clang_static_analyzer: true,
              enable_global_analysis: true,
              allow_duplicated_violations: true
            )
          end').runner.execute(:test)
    
        def ensure_generic_type_passes_validation(value)
      if @skip_type_validation
        return
      end
    
    # The * turns the array into a parameter list
# This is using the form of exec which takes a variable parameter list, e.g. `exec(command, param1, param2, ...)`
# We need to use that, because otherwise invocations like
# `spaceauth -u user@fastlane.tools` would recognize '-u user@fastlane.tools' as a single parameter and throw errors
exec(*exec_arr)

    
        def insert_after(index, *names)
      insert assert_index(index) + 1, *names
    end
    
          def get_type
        if slug.start_with?('guide/')
          'Guide'
        elsif slug.start_with?('cookbook/')
          'Cookbook'
        elsif slug == 'glossary'
          'Guide'
        else
          type = at_css('.nav-title.is-selected').content.strip
          type.remove! ' Reference'
          type << ': #{mod}' if mod
          type
        end
      end
    
          # Remembers the given resource by setting up a cookie
      def remember_me(resource)
        return if request.env['devise.skip_storage']
        scope = Devise::Mapping.find_scope!(resource)
        resource.remember_me!
        cookies.signed[remember_key(resource, scope)] = remember_cookie_values(resource)
      end
    
          def _devise_route_context
        @_devise_route_context ||= send(Devise.available_router_name)
      end
    end
  end
end

    
            # Removes reset_password token
        def clear_reset_password_token
          self.reset_password_token = nil
          self.reset_password_sent_at = nil
        end
    
            Devise::Models.config(self, :remember_for, :extend_remember_period, :rememberable_options, :expire_all_remember_me_on_sign_out)
      end
    end
  end
end

    
            # Returns the internal data associated with this plugin. This
        # should NOT be called by the general public.
        #
        # @return [Hash]
        def self.data
          @data ||= {}
        end
    
            # This returns all the registered guests.
        #
        # @return [Hash]
        def hosts
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.components.hosts)
            end
          end
        end
    
      def test_font_helper_with_suffix_question
    assert_match %r(url\(['']?/assets/.*eot\?.*['']?\)), @css
  end
    
    Liquid::Template.register_tag('img', Jekyll::ImageTag)

    
        def render(context)
      includes_dir = File.join(context.registers[:site].source, '_includes')
    
        def post_render(post)
      OctopressFilters::post_filter(post)
    end
  end
end