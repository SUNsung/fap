
        
            Or via the Cask:
      brew cask install ngrok
    EOS
  end
end

    
      # True if a {Formula} is being built without a specific option.
  # <pre>args << '--no-spam-plz' if build.without? 'spam'
  def without?(val)
    !with?(val)
  end
    
          update_disk_cleanup_size(path.disk_usage)
    end
    
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
    
      def python(_options = {}, &block)
    opoo 'Formula#python is deprecated and will go away shortly.'
    block.call if block_given?
    PythonRequirement.new
  end
  alias_method :python2, :python
  alias_method :python3, :python
end

    
      describe '::binary_osxfuse_installed?' do
    it 'returns false if fuse.h does not exist' do
      allow(File).to receive(:exist?).and_return(false)
      expect(described_class).not_to be_binary_osxfuse_installed
    end
    
      # Clean the keg of formula @f
  def clean
    ObserverPathnameExtension.reset_counts!
    
            raise t('error.invalid_stage_name', name: invalid, path: stage_config_path.join('#{invalid}.rb'))
      end
    end
  end
end

    
      tasks_dir = Pathname.new('lib/capistrano/tasks')
  config_dir = Pathname.new('config')
  deploy_dir = config_dir.join('deploy')
    
          context 'when the variables is undefined' do
        it 'calls the block' do
          expect(dsl.fetch(:source_control) { :svn }).to eq :svn
        end
      end
    end
  end
    
      def command_line(*options)
    options.each { |opt| ARGV << opt }
    subject.define_singleton_method(:exit) do |*_args|
      throw(:system_exit, :exit)
    end
    subject.run
    subject.options
  end