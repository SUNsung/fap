
        
              def build_rsync_chown(opts)
        guest_path = Shellwords.escape(opts[:guestpath])
        if(opts[:exclude] && !Array(opts[:exclude]).empty?)
          exclude_base = Pathname.new(opts[:guestpath])
          exclusions = Array(opts[:exclude]).map do |ex_path|
            ex_path = ex_path.slice(1, ex_path.size) if ex_path.start_with?(File::SEPARATOR)
            '-path #{Shellwords.escape(exclude_base.join(ex_path))} -prune'
          end.join(' -o ') + ' -o '
        end
        'find #{guest_path} #{exclusions}' \
          ''!' -type l -a ' \
          ''(' ! -user #{opts[:owner]} -or ! -group #{opts[:group]} ')' -exec ' \
          'chown #{opts[:owner]}:#{opts[:group]} '{}' +'
      end
    end
  end
end

    
    # Set the dummy provider to the default for tests
ENV['VAGRANT_DEFAULT_PROVIDER'] = 'dummy'
    
        it 'returns true if installed' do
      expect(machine.communicate).to receive(:test).
        with(command, sudo: true).and_return(true)
      subject.chef_installed(machine, 'chef_solo', version)
    end
    
        # Initializes by loading a Vagrantfile.
    #
    # @param [Config::Loader] loader Configuration loader that should
    #   already be configured with the proper Vagrantfile locations.
    #   This usually comes from {Vagrant::Environment}
    # @param [Array<Symbol>] keys The Vagrantfiles to load and the
    #   order to load them in (keys within the loader).
    def initialize(loader, keys)
      @keys   = keys
      @loader = loader
      @config, _ = loader.load(keys)
      @logger = Log4r::Logger.new('vagrant::vagrantfile')
    end
    
        describe '#name' do
      subject { super().name }
      it     { should eq(:default)  }
    end
    
          result = nil
      begin
        # Mark that we have a lock
        @locks[name] = true
    
            # Create a new driver instance
        #
        # @param [Vagrant::Machine] machine Machine instance for this driver
        def initialize(machine)
          if !Vagrant::Util::Which.which('docker-compose')
            raise Errors::DockerComposeNotInstalledError
          end
          super()
          @machine = machine
          @data_directory = Pathname.new(machine.env.local_data_path).
            join('docker-compose')
          @data_directory.mkpath
          @logger = Log4r::Logger.new('vagrant::docker::driver::compose')
          @compose_lock = Mutex.new
          @logger.debug('Docker compose driver initialize for machine `#{@machine.name}` (`#{@machine.id}`)')
          @logger.debug('Data directory for composition file `#{@data_directory}`')
        end
    
              with_target_vms(argv, provider: provider) do |machine|
            if !machine.config.vm.box
              machine.ui.output(I18n.t(
                'vagrant.errors.box_update_no_name'))
              next
            end
    
              action_called = false
          allow(action_runner).to receive(:run) do |action, opts|
            if opts[:box_provider]
              action_called = true
              expect(opts[:box_download_ca_cert]).to eq('foo')
              expect(opts[:box_download_ca_path]).to eq('bar')
              expect(opts[:box_download_client_cert]).to eq('baz')
              expect(opts[:box_download_insecure]).to be(true)
            end
    
        it 'returns nil when there is no match' do
      subject[:yosemite] = 'foo'
      expect(subject.fetch_checksum_for(:foo)).to be nil
    end
    
                problem 'Don't negate 'build.with?': use 'build.without?''
          end
    
        STANDARD_COMPILERS = {
      '6.0'    => { clang: '6.0', clang_build: 600 },
      '6.0.1'  => { clang: '6.0', clang_build: 600 },
      '6.1'    => { clang: '6.0', clang_build: 600 },
      '6.1.1'  => { clang: '6.0', clang_build: 600 },
      '6.2'    => { clang: '6.0', clang_build: 600 },
      '6.3'    => { clang: '6.1', clang_build: 602 },
      '6.3.1'  => { clang: '6.1', clang_build: 602 },
      '6.3.2'  => { clang: '6.1', clang_build: 602 },
      '6.4'    => { clang: '6.1', clang_build: 602 },
      '7.0'    => { clang: '7.0', clang_build: 700 },
      '7.0.1'  => { clang: '7.0', clang_build: 700 },
      '7.1'    => { clang: '7.0', clang_build: 700 },
      '7.1.1'  => { clang: '7.0', clang_build: 700 },
      '7.2'    => { clang: '7.0', clang_build: 700 },
      '7.2.1'  => { clang: '7.0', clang_build: 700 },
      '7.3'    => { clang: '7.3', clang_build: 703 },
      '7.3.1'  => { clang: '7.3', clang_build: 703 },
      '8.0'    => { clang: '8.0', clang_build: 800 },
      '8.1'    => { clang: '8.0', clang_build: 800 },
      '8.2'    => { clang: '8.0', clang_build: 800 },
      '8.2.1'  => { clang: '8.0', clang_build: 800 },
      '8.3'    => { clang: '8.1', clang_build: 802 },
      '8.3.1'  => { clang: '8.1', clang_build: 802 },
      '8.3.2'  => { clang: '8.1', clang_build: 802 },
      '8.3.3'  => { clang: '8.1', clang_build: 802 },
      '9.0'    => { clang: '9.0', clang_build: 900 },
      '9.0.1'  => { clang: '9.0', clang_build: 900 },
      '9.1'    => { clang: '9.0', clang_build: 900 },
      '9.2'    => { clang: '9.0', clang_build: 900 },
      '9.3'    => { clang: '9.1', clang_build: 902 },
      '9.4'    => { clang: '9.1', clang_build: 902 },
      '10.0'   => { clang: '10.0', clang_build: 1000 },
      '10.1'   => { clang: '10.0', clang_build: 1000 },
      '10.2'   => { clang: '10.0', clang_build: 1001 },
      '10.2.1' => { clang: '10.0', clang_build: 1001 },
      '11.0'   => { clang: '11.0', clang_build: 1100 },
    }.freeze
    
    require 'fileutils'
require 'cask/cache'
require 'cask/quarantine'
require 'cask/verify'
    
    require 'version'
    
      let(:local_caffeine) {
    Cask::CaskLoader.load(cask_path('local-caffeine'))
  }
    
        ohai 'Patching #{name}'
    patches.each(&:apply)
  end
    
        self.conn_threads = []
    self.listener_threads = []
    self.listener_pairs = {}
  end
    
        if prefix_super_map.key?(@module_type)
      unless super_class =~ prefix_super_map[@module_type]
        error('Invalid super class for #{@module_type} module (found '#{super_class}', expected something like #{prefix_super_map[@module_type]}')
      end
    else
      warn('Unexpected and potentially incorrect super class found ('#{super_class}')')
    end
  end
    
    
    {          This module was tested on Horde versions 5.2.22 and 5.2.17 running Horde Form subcomponent < 2.0.19.
        },
      'License'         => MSF_LICENSE,
      'Author'          =>
        [
          'Ratiosec',
        ],
      'References'      =>
        [
          ['CVE', '2019-9858'],
          ['URL', 'https://www.ratiosec.com/2019/horde-groupware-webmail-authenticated-arbitrary-file-injection-to-rce/'],
        ],
      'DisclosureDate'  => 'Mar 24 2019',
      'Platform'        => 'php',
      'Arch'            => ARCH_PHP,
      'Targets'         =>
        [
          ['Automatic', { }],
        ],
      'DefaultTarget'   => 0
    ))
    
      def encode_block(state, buf)
    # Have to have these for the decoder stub, so if they're not available,
    # there's nothing we can do here.
    %w{c h r ( ) . e v a l b a s e 6 4 _ d e c o d e ;}.uniq.each do |c|
      raise BadcharError if state.badchars.include?(c)
    end
    
      #
  # More advanced [] that does downcase comparison.
  #
  def [](key)
    begin
      rv = self.fetch(key)
    rescue IndexError
      rv = nil
    end
    if (rv == nil)
      begin
        rv = self.dcase_hash[key.downcase]
      rescue IndexError
        rv = nil
      end
    end
    
              private
    
                seq = OpenSSL::ASN1::Sequence.new(seqs)
    
        def test_noend_y
      assert_compile 'noend.y'
      assert_debugfile 'noend.y', []
    end
    
        cm = top_level.add_class RDoc::ClassModule, 'Klass'
    cm.add_method m
    
        @co.done_documenting = true
    
        assert_equal Encoding::UTF_8, encoding
  end
    
      def header
    <<-'HEADER'
# SOME DESCRIPTIVE TITLE.
# Copyright (C) YEAR THE PACKAGE'S COPYRIGHT HOLDER
# This file is distributed under the same license as the PACKAGE package.
# FIRST AUTHOR <EMAIL@ADDRESS>, YEAR.
#, fuzzy
msgid ''
msgstr ''
'Project-Id-Version: PACKAGE VERSEION\n'
'Report-Msgid-Bugs-To:\n'
'PO-Revision-Date: YEAR-MO_DA HO:MI+ZONE\n'
'Last-Translator: FULL NAME <EMAIL@ADDRESS>\n'
'Language-Team: LANGUAGE <LL@li.org>\n'
'Language:\n'
'MIME-Version: 1.0\n'
'Content-Type: text/plain; charset=CHARSET\n'
'Content-Transfer-Encoding: 8bit\n'
'Plural-Forms: nplurals=INTEGER; plural=EXPRESSION;\n'
    HEADER
  end
    
        i0_m4 = RDoc::Include.new 'Mod4', nil
    i0_m5 = RDoc::Include.new 'Mod5', nil
    i0_m6 = RDoc::Include.new 'Mod6', nil
    i0_m1 = RDoc::Include.new 'Mod1', nil
    i0_m2 = RDoc::Include.new 'Mod2', nil
    i0_m3 = RDoc::Include.new 'Mod3', nil
    
            verb('* * *\n',
             '\n',
             '***\n',
             '\n',
             '*****\n',
             '\n',
             '- - -\n',
             '\n',
             '---------------------------------------\n',
             '\n',
             '_ _ _\n'),
    
        assert_equal(['cat and ', @em_on, '5', @em_off, ' dogs'],
                  @am.flow('cat and _5_ dogs'))
  end
    
        assert_equal 'none',                  @as.as_string(0)
    assert_equal '_REGEXP_HANDLING_',     @as.as_string(1)
    assert_equal 'two',                   @as.as_string(2)
    assert_equal '_REGEXP_HANDLING_,two', @as.as_string(3)
  end
    
          expect(instance.render).to match %r{wemux.ls.2>\/dev\/null}
    end
  end
    
        initialize_with { Tmuxinator::Project.new(file) }
  end
    
          it 'prints the deprecations' do
        out, _err = capture_io { cli.start }
        expect(out).to include 'DEPRECATION'
      end
    end
    
          def local?
        local_project
      end