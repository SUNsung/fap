
        
                  if options['multiple']
            add_default_name_and_id_for_value(@checked_value, options)
            options.delete('multiple')
          else
            add_default_name_and_id(options)
          end
    
              def default_datetime(options)
            return if options[:include_blank] || options[:prompt]
    
            def render
          options = @options.stringify_keys
          options['size'] = options['maxlength'] unless options.key?('size')
          options['type'] ||= field_type
          options['value'] = options.fetch('value') { value_before_type_cast } unless field_type == 'file'
          add_default_name_and_id(options)
          tag('input', options)
        end
    
        def _normalize_layout(value)
      value.is_a?(String) && value !~ /\blayouts/ ? 'layouts/#{value}' : value
    end
    
            expect do
          Fastlane::FastFile.new.parse('lane :test do
            changelog_from_git_commits(merge_commit_filtering: 'invalid')
          end').runner.execute(:test)
        end.to raise_error(error_msg)
      end
    
            expect(result[3]).to start_with('security set-keychain-settings')
        expect(result[3]).to include('-t 600')
        expect(result[3]).to include('-l')
        expect(result[3]).to include('-u')
        expect(result[3]).to include('~/Library/Keychains/test.keychain')
      end
    end
  end
end

    
          context 'when specify false for quiet option' do
        it 'doesn't add quiet option' do
          result = Fastlane::FastFile.new.parse('lane :test do
            swiftlint(
              quiet: false
            )
          end').runner.execute(:test)
    
        def doc_default_value
      return '[*](#parameters-legend-dynamic)' if self.default_value_dynamic
      return '' if self.default_value.nil?
      return '`''`' if self.default_value.instance_of?(String) && self.default_value.empty?
      return '`:#{self.default_value}`' if self.default_value.instance_of?(Symbol)
    
              it 'prioritizes config file values after ENV' do
            config_item = FastlaneCore::ConfigItem.new(key: :item, env_name: 'abc', default_value: 'val default')
            config = FastlaneCore::Configuration.create([config_item], {})
            config.config_file_options = { item: 'val config' }
    
        os = 'windows'
    shellescape_testcases.each do |testcase|
      it testcase['it'] + ': ' + testcase['it_result'][os] do
        str = testcase['str'].to_s
        expect_correct_implementation_to_be_called(str, :shellescape, os)
        escaped = str.shellescape
        expect(escaped).to eq(testcase['expect'][os])
      end
    end
  end
    
    # Show a warning for PRs that are Work In Progress
if (github.pr_body + github.pr_title).include?('WIP')
  warn('Pull Request is Work in Progress')
end
    
        it 'updates Agents' last_error_log_at when an error is logged' do
      AgentLog.log_for_agent(agents(:jane_website_agent), 'some message', :level => 3, :outbound_event => events(:jane_website_agent_event))
      expect(agents(:jane_website_agent).reload.last_error_log_at).to be_nil
    
              # Handle the case that argv was empty or didn't contain any subcommand
          main_args = argv.dup if main_args.nil?
    
            # Capture all bad configuration calls and save them for an error
        # message later during validation.
        def method_missing(name, *args, &block)
          return super if @__finalized
    
            # Sets a human-friendly description of the plugin.
        #
        # @param [String] value Description of the plugin.
        # @return [String] Description of the plugin.
        def self.description(value=UNSET_VALUE)
          get_or_set(:description, value)
        end
    
        # Converts this registry to a hash
    def to_hash
      result = {}
      self.each do |key, value|
        result[key] = value
      end
    
      def down
    remove_index :share_visibilities, name: :shareable_and_user_id
    add_index :share_visibilities, %i(shareable_id shareable_type user_id), name: :shareable_and_user_id
  end
    
      def login_page
    path_to 'the new user session page'
  end
    
        it 'generates the contacts_json fixture', :fixture => true do
      json = bob.contacts.map { |c|
               ContactPresenter.new(c, bob).full_hash_with_person
             }.to_json
      save_fixture(json, 'contacts_json')
    end
  end
end

    
          it 'succeeds' do
        expect(response).to be_success
        post_request!
      end