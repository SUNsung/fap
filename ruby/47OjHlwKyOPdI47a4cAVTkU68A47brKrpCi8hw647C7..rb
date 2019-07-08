
        
                def to_s
          @symbol.to_s
        end
        alias to_str to_s
    
    class ArelLike
  def to_ary
    true
  end
  def each
    a = Array.new(2) { |id| Comment.new(id + 1) }
    a.each { |i| yield i }
  end
end
    
    # Mimic how Jekyll's LiquidRenderer would process a non-static file, with
# some dummy payload
def always_liquid(content)
  Liquid::Template.error_mode = :warn
  Liquid::Template.parse(content, :line_numbers => true).render(
    'author' => 'John Doe',
    'title'  => 'FooBar'
  )
end
    
              new_theme_name = args.join('_')
          theme = Jekyll::ThemeBuilder.new(new_theme_name, opts)
          Jekyll.logger.abort_with 'Conflict:', '#{theme.path} already exists.' if theme.path.exist?
    
          def site
        @site_drop ||= SiteDrop.new(@obj)
      end
    
            def importer_class
          NoteImporter
        end
    
          def action_for_rails(env)
        controller = env[CONTROLLER_KEY]
        action = '#{controller.class.name}##{controller.action_name}'
    
        it 'creates an agent with a source and a receiver' do
      visit '/'
      page.find('a', text: 'Agents').trigger(:mouseover)
      click_on('New Agent')
    
    describe AgentRunner do
  context 'without traps' do
    before do
      stub.instance_of(Rufus::Scheduler).every
      stub.instance_of(AgentRunner).set_traps
      @agent_runner = AgentRunner.new
    end
    
          a = '        Events will have the fields you specified.  Your options look like:\n\n            {\n      \'url\': {\n        \'css\': \'#comic img\',\n        \'value\': \'@src\'\n      },\n      \'title\': {\n        \'css\': \'#comic img\',\n        \'value\': \'@title\'\n      }\n    }\'\n'
      expect(Utils.unindent(a)).to eq('Events will have the fields you specified.  Your options look like:\n\n    {\n      \'url\': {\n\'css\': \'#comic img\',\n\'value\': \'@src\'\n      },\n      \'title\': {\n\'css\': \'#comic img\',\n\'value\': \'@title\'\n      }\n    }\'')
    end
  end
    
        @checker = Agents::AftershipAgent.new(:name => 'tectonic', :options => @opts)
    @checker.user = users(:bob)
    @checker.save!
  end
    
      describe '#working?' do
    it 'should not be working until the first event was received' do
      expect(@checker).not_to be_working
      @checker.last_receive_at = Time.now
      expect(@checker).to be_working
    end
  end
    
      gem.add_development_dependency 'danger'
  gem.add_development_dependency 'mocha'
  gem.add_development_dependency 'rspec'
  gem.add_development_dependency 'rubocop', '0.48.1'
end

    
          servers.add_role(name, hosts, options)
    end
    
            if echo?
          $stdin.gets
        else
          $stdin.noecho(&:gets).tap { $stdout.print '\n' }
        end
      rescue Errno::EIO
        # when stdio gets closed
        return
      end
    
      def new
    @broadcast = Broadcast.new
  end