
        
              topics.each do |t|
        t.posters = t.posters_summary(
          avatar_lookup: avatar_lookup,
          primary_group_lookup: primary_group_lookup,
          translations: translations
        )
      end
    end
    
            if path.present?
          path = '#{path}/' unless path.end_with?('/')
          path = Regexp.quote(path)
        end
    
        @s3_client.stub_responses(:put_object, -> (context) do
      check_context(context)
    
        it 'works when default_locale is not English' do
      SiteSetting.default_locale = :de
    
        h3('Configurable attributes') + to_table(header, content)
  end
    
          it_behaves_like 'accepts', 'bar > 42'
      it_behaves_like 'accepts', 'bar <= nil'
      it_behaves_like 'accepts', 'a > 3 && 5 > a'
      it_behaves_like 'offense', 'answer != 42'
      it_behaves_like 'offense', 'foo == false'
    end
  end
end

    
          # Checks whether the method is a predicate method.
      #
      # @return [Boolean] whether the method is a predicate method
      def predicate_method?
        method_name.to_s.end_with?('?')
      end
    
    describe FPM::Package::CPAN, :if => have_cpanm do
  subject { FPM::Package::CPAN.new }
    
          it 'it should prefix requirements.txt' do
        subject.input(example_dir)
        insist { subject.dependencies.sort } == ['python-rtxt-dep1 > 0.1', 'python-rtxt-dep2 = 0.1', 'python-rtxt-dep4  ']
      end
    
          it 'should have the custom apps' do
        pending('Ruby 1.x and 2.0.x are unsupported for Snap because it lacks Psych::safe_load') if is_old_ruby
        insist { input.attributes[:snap_apps] } == []
      end
    
      shared_examples_for :Mutator do |item|
    context 'when set' do
      let(:value) { 'whatever' }
      it 'should return the set value' do
        expect(subject.send('#{item}=', value)).to(be == value)
      end
    
      config.vm.define 'debian7' do |debian7|
    debian7.vm.box = 'puppetlabs/centos-7.0-64-puppet'
  end
    
    require 'fpm'
require 'tmpdir'
require 'fpm/package/pleaserun'
    
          mandatory(@command.args.any? || @command.inputs || @command.input_type == 'empty',
                'No parameters given. You need to pass additional command ' \
                'arguments so that I know what you want to build packages ' \
                'from. For example, for '-s dir' you would pass a list of ' \
                'files and directories. For '-s gem' you would pass a one' \
                ' or more gems to package from. As a full example, this ' \
                'will make an rpm of the 'json' rubygem: ' \
                '`fpm -s gem -t rpm json`')
    end # def validate
    
      def edit_file(path)
    editor = ENV['FPM_EDITOR'] || ENV['EDITOR'] || 'vi'
    logger.info('Launching editor', :file => path)
    command = '#{editor} #{Shellwords.escape(path)}'
    system('#{editor} #{Shellwords.escape(path)}')
    if !$?.success?
      raise ProcessFailed.new(''#{editor}' failed (exit code ' \
                              '#{$?.exitstatus}) Full command was: ' \
                              '#{command}');
    end
    
        # control tar.
    begin
      write_pkginfo(control_path)
      write_control_scripts(control_path)
      tar_path(control_path, controltar_path)
    ensure
      FileUtils.rm_r(control_path)
    end
    
        # Query details about our now-installed package.
    # We do this by using 'npm ls' with json + long enabled to query details
    # about the installed package.
    npm_ls_out = safesystemout(attributes[:npm_bin], 'ls', '--json', '--long', *npm_flags)
    npm_ls = JSON.parse(npm_ls_out)
    name, info = npm_ls['dependencies'].first
    
      # Map of what scripts are named.
  SCRIPT_MAP = {
    :before_install     => 'preinstall',
    :after_install      => 'postinstall',
  } unless defined?(SCRIPT_MAP)
    
        # Cleanup
    safesystem('mv', build_path('#{name}.p5p'), output_path)
    
        # Make one file. The installscript can unpack itself.
    `cat #{install_script} #{payload} > #{output_path}`
    FileUtils.chmod('+x', output_path)
  end
    
      def architecture
    case @architecture
    when nil, 'native'
      @architecture = %x{uname -p}.chomp
    end
    # 'all' is a valid arch according to
    # http://www.bolthole.com/solaris/makeapackage.html