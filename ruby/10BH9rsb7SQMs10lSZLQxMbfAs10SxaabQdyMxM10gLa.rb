
        
            it 'lists all users' do
      visit admin_users_path
      expect(page).to have_text('bob')
      expect(page).to have_text('jane')
    end
    
          select_agent_type('Weather Agent')
      fill_in(:agent_name, with: 'Test Weather Agent')
    
          open_dry_run_modal(formatting_agent)
      find('.dry-run-event-sample').click
      within(:css, '.modal .builder') do
        expect(page).to have_text('Line 1\nLine 2\nLine 3')
      end
      click_on('Dry Run')
      expect(page).to have_text('Line 1,Line 2,Line 3')
      expect(page).to have_selector(:css, 'li[role='presentation'].active a[href='#tabEvents']')
    end
  end
    
      it 'asks to accept conflicts when the scenario was modified' do
    DefaultScenarioImporter.seed(user)
    agent = user.agents.where(name: 'Rain Notifier').first
    agent.options['expected_receive_period_in_days'] = 9001
    agent.save!
    visit new_scenario_imports_path
    attach_file('Option 2: Upload a Scenario JSON File', File.join(Rails.root, 'data/default_scenario.json'))
    click_on 'Start Import'
    expect(page).to have_text('This Scenario already exists in your system.')
    expect(page).to have_text('9001')
    check('I confirm that I want to import these Agents.')
    click_on 'Finish Import'
    expect(page).to have_text('Import successful!')
  end
    
      describe '#relative_distance_of_time_in_words' do
    it 'in the past' do
      expect(relative_distance_of_time_in_words(Time.now-5.minutes)).to eq('5m ago')
    end
    
      private
    
          def decoded
        secret =
          case options.algorithm
          when *%w[RS256 RS384 RS512]
            OpenSSL::PKey::RSA.new(options.secret).public_key
          when *%w[ES256 ES384 ES512]
            OpenSSL::PKey::EC.new(options.secret).tap { |key| key.private_key = nil }
          when *%w(HS256 HS384 HS512)
            options.secret
          else
            raise NotImplementedError, 'Unsupported algorithm: #{options.algorithm}'
          end
    
            begin
          new_value = value.present? ? ChronicDuration.parse(value).to_i : parameters[:default].presence
          assign_attributes(source_attribute => new_value)
        rescue ChronicDuration::DurationParseError
          # ignore error as it will be caught by validation
        end
      end
    
            desc 'Denies an access request for the given user.' do
          detail 'This feature was introduced in GitLab 8.11.'
        end
        params do
          requires :user_id, type: Integer, desc: 'The user ID of the access requester'
        end
        # rubocop: disable CodeReuse/ActiveRecord
        delete ':id/access_requests/:user_id' do
          source = find_source(source_type, params[:id])
          member = source.requesters.find_by!(user_id: params[:user_id])
    
          it 'returns true' do
        expect(node.pure?).to be(true)
      end
    end
    
          class << self
        attr_reader :processed_source
    
            # Returns true if running with --auto-correct would remove the braces
        # of the last argument.
        def braces_will_be_removed?(args)
          brace_config = config.for_cop('Style/BracesAroundHashParameters')
          return false unless brace_config.fetch('Enabled')
          return false if brace_config['AutoCorrect'] == false
    
            self
      end
    
          # Returns the branch of the `if` node that gets evaluated when its
      # condition is falsey.
      #
      # @note This is normalized for `unless` nodes.
      #
      # @return [Node] the falsey branch node of the `if` node
      # @return [nil] when there is no else branch
      def else_branch
        node_parts[2]
      end