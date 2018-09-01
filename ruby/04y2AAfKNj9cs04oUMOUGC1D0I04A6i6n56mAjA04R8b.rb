
        
            open_dry_run_modal(agent)
    click_on('Dry Run')
    expect(page).to have_text('Dry Run started')
    expect(page).to have_selector(:css, 'li[role='presentation'].active a[href='#tabLog']')
  end
end

    
        describe 'with block' do
      it 'returns a nav link with menu' do
        stub(self).current_page?('/things') { false }
        stub(self).current_page?('/things/stuff') { false }
        nav = nav_link('Things', '/things') { nav_link('Stuff', '/things/stuff') }
        expect(nav).to be_html_safe
        a0 = Nokogiri(nav).at('li.dropdown.dropdown-hover:not(.active) > a[href='/things']')
        expect(a0).to be_a Nokogiri::XML::Element
        expect(a0.text.strip).to eq('Things')
        a1 = Nokogiri(nav).at('li.dropdown.dropdown-hover:not(.active) > li:not(.active) > a[href='/things/stuff']')
        expect(a1).to be_a Nokogiri::XML::Element
        expect(a1.text.strip).to eq('Stuff')
      end
    
        it 'works for running jobs' do
      job.locked_at = Time.now
      job.locked_by = 'test'
      expect(status(job)).to eq('<span class='label label-info'>running</span>')
    end
    
            end
        it 'restarts dead workers' do
          stub.instance_of(HuginnScheduler).thread { OpenStruct.new(alive?: false) }
          mock.instance_of(HuginnScheduler).run!
          @agent_runner.send(:restart_dead_workers)
        end
      end
    end
  end
    
        it 'has a default when the result is empty' do
      expect(AgentsExporter.new(:name => '').filename).to eq('exported-agents.json')
      expect(AgentsExporter.new(:name => 'Ə').filename).to eq('exported-agents.json')
      expect(AgentsExporter.new(:name => '-').filename).to eq('exported-agents.json')
      expect(AgentsExporter.new(:name => ',,').filename).to eq('exported-agents.json')
    end
  end
    
      describe 'migrating the 'make_message' format' do
    it 'should work' do
      expect(LiquidMigrator.convert_make_message('<message>')).to eq('{{message}}')
      expect(LiquidMigrator.convert_make_message('<new.message>')).to eq('{{new.message}}')
      expect(LiquidMigrator.convert_make_message('Hello <world>. How is <nested.life>')).to eq('Hello {{world}}. How is {{nested.life}}')
    end
  end
    
      it 'considers a location empty if either latitude or longitude is missing' do
    expect(Location.new.empty?).to be_truthy
    expect(Location.new(lat: 2, radius: 1).present?).to be_falsy
    expect(Location.new(lng: 3, radius: 1).present?).to be_falsy
  end
    
      #
  # Dispatches the supplied request for a given connection.
  #
  def dispatch_request(cli, request)
    # Is the client requesting keep-alive?
    if ((request['Connection']) and
       (request['Connection'].downcase == 'Keep-Alive'.downcase))
      cli.keepalive = true
    end
    
        FUNCTION_RE = /^@function\s*(#{Sass::SCSS::RX::IDENT})(.*)$/
    def parse_function_directive(parent, line, root, value, offset)
      name, arg_string = line.text.scan(FUNCTION_RE).first
      raise SyntaxError.new('Invalid function definition \'#{line.text}\'.') if name.nil?