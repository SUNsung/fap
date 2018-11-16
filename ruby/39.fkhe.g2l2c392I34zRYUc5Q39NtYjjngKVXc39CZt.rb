
        
        def bottle_file_outdated?(f, file)
  filename = file.basename.to_s
  return unless f.bottle && filename.match(Pathname::BOTTLE_EXTNAME_RX)
    
        if superenv?
      ENV.keg_only_deps = keg_only_deps
      ENV.deps = formula_deps
      ENV.x11 = reqs.any? { |rq| rq.is_a?(X11Requirement) }
      ENV.setup_build_environment(formula)
      post_superenv_hacks
      reqs.each(&:modify_build_environment)
      deps.each(&:modify_build_environment)
    else
      ENV.setup_build_environment(formula)
      reqs.each(&:modify_build_environment)
      deps.each(&:modify_build_environment)
    
    class PrettyListing
  def initialize(path)
    Pathname.new(path).children.sort_by { |p| p.to_s.downcase }.each do |pn|
      case pn.basename.to_s
      when 'bin', 'sbin'
        pn.find { |pnn| puts pnn unless pnn.directory? }
      when 'lib'
        print_dir pn do |pnn|
          # dylibs have multiple symlinks and we don't care about them
          (pnn.extname == '.dylib' || pnn.extname == '.pc') && !pnn.symlink?
        end
      else
        if pn.directory?
          if pn.symlink?
            puts '#{pn} -> #{pn.readlink}'
          else
            print_dir pn
          end
        elsif Metafiles.list?(pn.basename.to_s)
          puts pn
        end
      end
    end
  end
    
          if $stdout.tty?
        count = local_results.length + tap_results.length
    
          case status
      when 'A', 'D'
        @report[status.to_sym] << tap.formula_file_to_name(src)
      when 'M'
        begin
          formula = Formulary.factory(tap.path/src)
          new_version = formula.pkg_version
          old_version = FormulaVersions.new(formula).formula_at_revision(@initial_revision, &:pkg_version)
          next if new_version == old_version
        rescue Exception => e
          onoe e if ARGV.homebrew_developer?
        end
        @report[:M] << tap.formula_file_to_name(src)
      when /^R\d{0,3}/
        @report[:D] << tap.formula_file_to_name(src) if tap.formula_file?(src)
        @report[:A] << tap.formula_file_to_name(dst) if tap.formula_file?(dst)
      end
    end
    
      def self.canonical_name(name)
    Formulary.canonical_name(name)
  end
    
        it 'returns a label 'Yes' if a given agent is working' do
      stub(@agent).working? { true }
      label = working(@agent)
      expect(label).to be_html_safe
      expect(Nokogiri(label).text).to eq 'Yes'
    end
    
        it 'defauls foreground and background colors' do
      scenario.tag_fg_color = nil
      scenario.tag_bg_color = nil
      expect(style_colors(scenario)).to eq('color:#FFFFFF;background-color:#5BC0DE')
    end
  end
    
          it 'loads all workers' do
        workers = @agent_runner.send(:load_workers)
        expect(workers).to be_a(Hash)
        expect(workers.keys).to eq(['HuginnScheduler', 'DelayedJobWorker'])
      end
    
      describe 'converting escaped JSONPath strings' do
    it 'should work' do
      expect(LiquidMigrator.convert_string('Weather looks like <$.conditions> according to the forecast at <$.pretty_date.time>')).to eq(
                                    'Weather looks like {{conditions}} according to the forecast at {{pretty_date.time}}'
      )
    end
    
              # First determine the proper array of VMs.
          vms = []
          if names.length > 0
            names.each do |name|
              if pattern = name[/^\/(.+?)\/$/, 1]
                # This is a regular expression name, so we convert to a regular
                # expression and allow that sort of matching.
                regex = Regexp.new(pattern)
    
            # Initializes the system. Any subclasses MUST make sure this
        # method is called on the parent. Therefore, if a subclass overrides
        # `initialize`, then you must call `super`.
        def initialize(vm)
          @vm = vm
        end
    
              opts.parse!(argv)
          return argv
        rescue OptionParser::InvalidOption, OptionParser::MissingArgument
          raise Errors::CLIInvalidOptions, help: opts.help.chomp
        end
    
            # This contains all the push implementations by name.
        #
        # @return [Registry<Symbol, Array<Class, Hash>>]
        attr_reader :pushes
    
              results
        end
    
            # This is an internal initialize function that should never be
        # overridden. It is used to initialize some common internal state
        # that is used in a provider.
        def _initialize(name, machine)
          initialize_capabilities!(
            name.to_sym,
            { name.to_sym => [Class.new, nil] },
            Vagrant.plugin('2').manager.provider_capabilities,
            machine,
          )
        end
      end
    end
  end
end
