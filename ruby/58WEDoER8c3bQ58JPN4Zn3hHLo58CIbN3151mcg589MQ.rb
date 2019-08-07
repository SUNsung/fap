
        
              it 'updates an existing user' do
        visit edit_admin_user_path(users(:bob))
        check 'Admin'
        click_on 'Update User'
        expect(page).to have_text('User 'bob' was successfully updated.')
        visit edit_admin_user_path(users(:bob))
        expect(page).to have_checked_field('Admin')
      end
    
      describe '#scenario_label' do
    it 'creates a scenario label with the scenario name' do
      expect(scenario_label(scenario)).to eq(
        '<span class='label scenario' style='color:#AAAAAA;background-color:#000000'>Scene</span>'
      )
    end
    
            _existing_scenerio
      end
    
          agent_runner.stop
    end
  end
end
    
      describe '#working?' do
    it 'should not be working until the first event was received' do
      expect(@checker).not_to be_working
      @checker.last_receive_at = Time.now
      expect(@checker).to be_working
    end
  end
    
        it 'mutes notifications' do
      expect(user.account.muting_notifications?(other_account)).to be true
    end
    
      before { allow(controller).to receive(:doorkeeper_token) { token } }
    
      def test_image_helper
    assert_match %r(url\(['']?/assets/apple-touch-icon-144-precomposed.*png['']?\)), @css
  end
    
          def ==(other)
        self.class == other.class &&
            spec == other.spec &&
            used_by_non_library_targets_only? == other.used_by_non_library_targets_only?
      end
    end
  end
end

    
          # Prints an info to the user. The info is always displayed.
      # It respects the current indentation level only in verbose
      # mode.
      #
      # Any title printed in the optional block is treated as a message.
      #
      # @param [String] message
      #        The message to print.
      #
      def info(message)
        indentation = config.verbose? ? self.indentation_level : 0
        indented = wrap_string(message, indentation)
        puts(indented)
    
          module_function
    
            # Returns true if running with --auto-correct would remove the braces
        # of the last argument.
        def braces_will_be_removed?(args)
          brace_config = config.for_cop('Style/BracesAroundHashParameters')
          return false unless brace_config.fetch('Enabled')
          return false if brace_config['AutoCorrect'] == false
    
          def interpret_string_escapes(string)
        StringInterpreter.interpret(string)
      end
    
            context 'without parentheses' do
          it 'changes for to each' do
            new_source = autocorrect_source(<<~RUBY)
              def func
                for n in 1...value do
                  puts n
                end
              end
            RUBY
    
          # Checks whether the method is a predicate method.
      #
      # @return [Boolean] whether the method is a predicate method
      def predicate_method?
        method_name.to_s.end_with?('?')
      end