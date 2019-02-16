
        
        # No trailing slash
Benchmark.ips do |x|
  path = '/some/very/very/long/path/to/a/file/i/like'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end
    
      </body>
</html>
HTML
CONTENT_NOT_CONTAINING = <<-HTML.freeze
<!DOCTYPE HTML>
<html lang='en-US'>
  <head>
<meta http-equiv='Content-Type' content='text/html; charset=UTF-8'>
    <meta charset='UTF-8'>
    <title>Jemoji</title>
    <meta name='viewport' content='width=device-width,initial-scale=1'>
    <link rel='stylesheet' href='/css/screen.css'>
  </head>
  <body class='wrap'>
    <p><img class='emoji' title=':+1:' alt=':+1:' src='https://assets.github.com/images/icons/emoji/unicode/1f44d.png' height='20' width='20' align='absmiddle'></p>
    
    #
    
              new_theme_name = args.join('_')
          theme = Jekyll::ThemeBuilder.new(new_theme_name, opts)
          Jekyll.logger.abort_with 'Conflict:', '#{theme.path} already exists.' if theme.path.exist?
    
            def stop
          # There is only one EventMachine instance per Ruby process so stopping
          # it here will stop the reactor thread we have running.
          EM.stop if EM.reactor_running?
          Jekyll.logger.debug 'LiveReload Server:', 'halted'
        end
    
                  'coderay'
            else
              @main_fallback_highlighter
            end
          end
        end
    
        def no_subcommand(args)
      unless args.empty? ||
          args.first !~ %r(!/^--/!) || %w(--help --version).include?(args.first)
        deprecation_message 'Jekyll now uses subcommands instead of just switches. \
                          Run `jekyll help` to find out more.'
        abort
      end
    end
    
        def limit_reached_for(user_id, date)
      GivenDailyLike.find_for(user_id, date).pluck(:limit_reached)[0] || false
    end
    
            staff.topic_id = post.topic.id
        unless staff.save
          puts staff.errors.full_messages
          puts 'Failed to set the Staff category description topic!'
        end
    
        it 'works for running jobs' do
      job.locked_at = Time.now
      job.locked_by = 'test'
      expect(status(job)).to eq('<span class='label label-info'>running</span>')
    end
    
        it 'can not be turned off' do
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('IMPORT_DEFAULT_SCENARIO_FOR_ALL_USERS') { 'true' }
      expect { DefaultScenarioImporter.seed(user) }.to change(user.agents, :count).by(7)
    end
  end
end

    
            agent_runner.stop
      end
    end
    
          expect(exporter.as_json[:control_links]).to eq([{ :controller => guid_order(agent_list, :jane_rain_notifier_agent), :control_target => guid_order(agent_list, :jane_weather_agent) }])
    end
  end
    
    describe HuginnScheduler do
  before(:each) do
    @rufus_scheduler = Rufus::Scheduler.new
    @scheduler = HuginnScheduler.new
    stub(@scheduler).setup {}
    @scheduler.setup!(@rufus_scheduler, Mutex.new)
  end
    
        it 'should ignore strings which just contain a JSONPath' do
      expect(LiquidMigrator.convert_string('$.data')).to eq('$.data')
      expect(LiquidMigrator.convert_string('$first_title')).to eq('$first_title')
      expect(LiquidMigrator.convert_string(' $.data', true)).to eq(' $.data')
      expect(LiquidMigrator.convert_string('lorem $.data', true)).to eq('lorem $.data')
    end
    it 'should raise an exception when encountering complex JSONPaths' do
      expect { LiquidMigrator.convert_string('$.data.test.*', true) }.
        to raise_error('JSONPath '$.data.test.*' is too complex, please check your migration.')
    end
  end
    
      describe '#jsonify' do
    it 'escapes </script> tags in the output JSON' do
      cleaned_json = Utils.jsonify(:foo => 'bar', :xss => '</script><script>alert('oh no!')</script>')
      expect(cleaned_json).not_to include('</script>')
      expect(cleaned_json).to include('\\u003c/script\\u003e')
    end
    
      describe '#check' do
    it 'should check that initial run creates an event' do
      @checker.memory[:last_updated_at] = '2016-03-15T14:01:05+00:00'
      expect { @checker.check }.to change { Event.count }.by(1)
    end
  end
end

    
            # Merge another configuration object into this one. This assumes that
        # the other object is the same class as this one. This should not
        # mutate this object, but instead should return a new, merged object.
        #
        # The default implementation will simply iterate over the instance
        # variables and merge them together, with this object overriding
        # any conflicting instance variables of the older object. Instance
        # variables starting with '__' (double underscores) will be ignored.
        # This lets you set some sort of instance-specific state on your
        # configuration keys without them being merged together later.
        #
        # @param [Object] other The other configuration object to merge from,
        #   this must be the same type of object as this one.
        # @return [Object] The merged object.
        def merge(other)
          result = self.class.new
    
              @registered.each do |plugin|
            hosts.merge!(plugin.host.to_hash)
          end
    
            # This is the method called to provision the system. This method
        # is expected to do whatever necessary to provision the system (create files,
        # SSH, etc.)
        def provision!
        end
    
                # Get the right machine with the right provider
            @env.machine(name, provider_to_use)
          end
    
    # skip over blogs that aren't found
unavailable = []
fast_forwards = [
  'Baidu Research',
  'Booking.com',
  'Fynd',
  'Graphcool',
  'LinkedIn',
  'Medallia',
  'OmniTI',
  'Paperless Post',
  'Pluralsight',
  'Prolific Interactive',
  'Quora',
  'Robert Elder Software',
  'Simple',
  'SlideShare',
  'SourceClear',
  'Viget',
  'Zalando',
  'Zapier',
  'Zynga',
  'Dave Beazley',
  'Edan Kwan',
  'Grzegorz Gajos',
  'Joe Armstrong',
  'Kai Hendry',
  'LiveOverflow'
]
    
    
  config.vm.define 'centos6' do |centos6|
    centos6.vm.box = 'puppetlabs/centos-6.6-64-puppet'
  end
    
      option '--post-install', 'FILE',
    '(DEPRECATED, use --after-install) A script to be run after ' \
    'package installation' do |val|
    @after_install = File.expand_path(val) # Get the full path to the script
  end # --post-install (DEPRECATED)
  option '--pre-install', 'FILE',
    '(DEPRECATED, use --before-install) A script to be run before ' \
    'package installation' do |val|
    @before_install = File.expand_path(val) # Get the full path to the script
  end # --pre-install (DEPRECATED)
  option '--post-uninstall', 'FILE',
      '(DEPRECATED, use --after-remove) A script to be run after ' \
      'package removal' do |val|
    @after_remove = File.expand_path(val) # Get the full path to the script
  end # --post-uninstall (DEPRECATED)
  option '--pre-uninstall', 'FILE',
    '(DEPRECATED, use --before-remove) A script to be run before ' \
    'package removal'  do |val|
    @before_remove = File.expand_path(val) # Get the full path to the script
  end # --pre-uninstall (DEPRECATED)
    
        # Final edit for lint check and packaging
    edit_file(manifest_fn) if attributes[:edit?]
    
        self.attributes[:pacman_optional_depends] = control['optdepend'] || []
    # There are other available attributes, but I didn't include them because:
    # - makedepend: deps needed to make the arch package. But it's already
    #   made. It just needs to be converted at this point
    # - checkdepend: See above
    # - makepkgopt: See above
    # - size: can be dynamically generated
    # - builddate: Should be changed to time of package conversion in the new
    #   package, so this value should be thrown away.
    
          if !attributes[:python_setup_py_arguments].nil? and !attributes[:python_setup_py_arguments].empty?
        # Add optional setup.py arguments
        attributes[:python_setup_py_arguments].each do |a|
          flags += [ a ]
        end
      end