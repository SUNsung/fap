
        
                  # `mathjax` emgine is bundled within kramdown-2.x and will be handled by
          # kramdown itself.
          if (math_engine = @config['math_engine']) && math_engine != 'mathjax'
            Jekyll::External.require_with_graceful_fail('kramdown-math-#{math_engine}')
          end
        end
    
    #############################################################################
#
# Helper functions
#
#############################################################################
    
    Benchmark.ips do |x|
  x.report('local-require') { local_require }
  x.report('global-require') { global_require }
  x.report('graceful-require') { graceful_require }
  x.compare!
end

    
    def native_relative
  DOC_PATH.sub('#{COL_PATH}/', '')
end
    
    Jekyll::Deprecator.process(ARGV)
    
          def print_summary(features)
        @io.puts
        print_stats(features, @options)
        print_snippets(@options)
        print_passing_wip(@options)
      end
    end
  end
end
    
              new_theme_name = args.join('_')
          theme = Jekyll::ThemeBuilder.new(new_theme_name, opts)
          Jekyll.logger.abort_with 'Conflict:', '#{theme.path} already exists.' if theme.path.exist?
    
        it 'returns a Glyphicon icon element with an addidional class' do
      icon = icon_tag('glyphicon-help', class: 'text-info')
      expect(icon).to be_html_safe
      expect(Nokogiri(icon).at('span.glyphicon.glyphicon-help.text-info')).to be_a Nokogiri::XML::Element
    end
    
          it 'generates a richer DOT script' do
        expect(agents_dot(@agents, rich: true)).to match(%r{
          \A
          digraph \x20 'Agent \x20 Event \x20 Flow' \{
            (graph \[ [^\]]+ \];)?
            node \[ [^\]]+ \];
            edge \[ [^\]]+ \];
            (?<foo>\w+) \[label=foo,tooltip='Dot \x20 Foo',URL='#{Regexp.quote(agent_path(@foo))}'\];
            \k<foo> -> (?<bar1>\w+) \[style=dashed\];
            \k<foo> -> (?<bar2>\w+) \[color='\#999999'\];
            \k<bar1> \[label=bar1,tooltip='Dot \x20 Bar',URL='#{Regexp.quote(agent_path(@bar1))}'\];
            \k<bar2> \[label=bar2,tooltip='Dot \x20 Bar',URL='#{Regexp.quote(agent_path(@bar2))}',style='rounded,dashed',color='\#999999',fontcolor='\#999999'\];
            \k<bar2> -> (?<bar3>\w+) \[style=dashed,color='\#999999'\];
            \k<bar3> \[label=bar3,tooltip='Dot \x20 Bar',URL='#{Regexp.quote(agent_path(@bar3))}'\];
          \}
          \z
        }x)
      end
    end
  end
    
        it 'works for queued jobs' do
      expect(status(job)).to eq('<span class='label label-warning'>queued</span>')
    end
  end
    
            it 'kills no long active workers' do
          mock.instance_of(HuginnScheduler).run!
          mock.instance_of(DelayedJobWorker).run!
          @agent_runner.send(:run_workers)
          AgentRunner.class_variable_set(:@@agents, [DelayedJobWorker])
          mock.instance_of(HuginnScheduler).stop!
          @agent_runner.send(:run_workers)
        end
      end
    
        it 'should raise an exception when encountering complex JSONPaths' do
      @agent.options['username_path'] = '$.very.complex[*]'
      expect { LiquidMigrator.convert_all_agent_options(@agent) }.
        to raise_error('JSONPath '$.very.complex[*]' is too complex, please check your migration.')
    end
    
        it 'accepts objects as well as strings' do
      log = AgentLog.log_for_agent(agents(:jane_website_agent), events(:bob_website_agent_event).payload)
      expect(log.message).to include(''title'=>'foo'')
    end
  end
    
        stub_request(:get, /trackings/).to_return(
      :body => File.read(Rails.root.join('spec/data_fixtures/aftership.json')),
      :status => 200,
      :headers => {'Content-Type' => 'text/json'}
    )
    
          it 'does not write the headers when with_header is false' do
        @checker.options['with_header'] = 'false'
        event = Event.new(payload: { 'data' => {'key' => 'value', 'key2' => 'value2', 'key3' => 'value3'} })
        expect { @checker.receive([event])}.to change(Event, :count).by(1)
        expect(Event.last.payload).to eq('data' => '\'value\',\'value2\',\'value3\'\n')
      end
    
          # Initialize a new instance
      #
      # @param [Sandbox] sandbox see #sandbox
      # @param [String] sandbox_root see #sandbox_root
      # @param [Xcodeproj::Project] pods_project see #pods_project
      # @param [Array<UmbrellaTargetDescription>] umbrella_targets see #umbrella_targets
      #
      def initialize(sandbox, sandbox_root, pods_project, umbrella_targets)
        @sandbox = sandbox
        @sandbox_root = sandbox_root
        @pods_project = pods_project
        @umbrella_targets = umbrella_targets
      end
    
        # Checks that the podfile exists.
    #
    # @raise  If the podfile does not exists.
    #
    # @return [void]
    #
    def verify_podfile_exists!
      unless config.podfile
        raise Informative, 'No `Podfile' found in the project directory.'
      end
    end
    
            # @private
        # @return [Hash<PodVariant, String>]
        #
        def scope_by_linkage
          scope_if_necessary(group_by { |v| v.build_type.linkage }.map(&:scope_by_platform)) do |variant|
            variant.build_type.linkage
          end
        end
    
              # Creates the group that holds the references to the support files
          # generated by this installer.
          #
          # @return [void]
          #
          def create_support_files_group
            parent = project.support_files_group
            name = target.name
            dir = target.support_files_dir
            @support_files_group = parent.new_group(name, dir)
          end
    
            # Cleans up projects before writing.
        #
        def cleanup_projects(projects)
          projects.each do |project|
            [project.pods, project.support_files_group,
             project.development_pods, project.dependencies_group].each { |group| group.remove_from_project if group.empty? }
            project.sort(:groups_position => :below)
          end
        end
      end
    end
  end
end
