
        
                def render(&block)
          options = @options.stringify_keys
          tag_value = options.delete('value')
          name_and_id = options.dup
    
          # Creates a _layout method to be called by _default_layout .
      #
      # If a layout is not explicitly mentioned then look for a layout with the controller's name.
      # if nothing is found then try same procedure to find super class's layout.
      def _write_layout_method # :nodoc:
        silence_redefinition_of_method(:_layout)
    
          super
    end
    
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
    
        it 'returns a correct icon tag for GitHub' do
      icon = omniauth_provider_icon(:github)
      expect(icon).to be_html_safe
      elem = Nokogiri(icon).at('i.fa.fa-github')
      expect(elem).to be_a Nokogiri::XML::Element
    end
    
      describe '#scenario_label' do
    it 'creates a scenario label with the scenario name' do
      expect(scenario_label(scenario)).to eq(
        '<span class='label scenario' style='color:#AAAAAA;background-color:#000000'>Scene</span>'
      )
    end
    
      it 'should propagate events' do
    mock(Agent).receive!
    stub.instance_of(IO).puts
    @scheduler.send(:propagate!)
  end
    
      describe 'migrating the 'make_message' format' do
    it 'should work' do
      expect(LiquidMigrator.convert_make_message('<message>')).to eq('{{message}}')
      expect(LiquidMigrator.convert_make_message('<new.message>')).to eq('{{new.message}}')
      expect(LiquidMigrator.convert_make_message('Hello <world>. How is <nested.life>')).to eq('Hello {{world}}. How is {{nested.life}}')
    end
  end
    
            # Defines an additionally available host implementation with
        # the given key.
        #
        # @param [String] name Name of the host.
        # @param [String] parent Name of the parent host (if any)
        def self.host(name, parent=nil, &block)
          components.hosts.register(name.to_sym) do
            parent = parent.to_sym if parent
    
            # This should return the state of the machine within this provider.
        # The state must be an instance of {MachineState}. Please read the
        # documentation of that class for more information.
        #
        # @return [MachineState]
        def state
          nil
        end
    
    Liquid::Template.register_tag('img', Jekyll::ImageTag)

    
            Dir.chdir(includes_dir) do
          choices = Dir['**/*'].reject { |x| File.symlink?(x) }
          if choices.include?(file)
            source = File.read(file)
            partial = Liquid::Template.parse(source)
            context.stack do
              rtn = rtn + partial.render(context)
            end
          else
            rtn = rtn + 'Included file '#{file}' not found in _includes directory'
          end
        end
      end
      rtn
    end
  end
    
        def render(context)
      code_dir = (context.registers[:site].config['code_dir'].sub(/^\//,'') || 'downloads/code')
      code_path = (Pathname.new(context.registers[:site].source) + code_dir).expand_path
      file = code_path + @file