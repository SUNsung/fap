
        
          end
    
      included do
    scope :admins, -> { where(admin: true) }
    scope :moderators, -> { where(moderator: true) }
    scope :staff, -> { where('moderator or admin ') }
  end
    
          key = Spaceship::Portal::Key.create(name: 'New Key', apns: true, device_check: true, music_id: 'some-music-id')
      expect(key).to be_instance_of(Spaceship::Portal::Key)
      expect(key.id).to eq('a-new-key-id')
    end
  end
    
          # Run a certain action
      def trigger(task: nil, flags: nil, serial: nil, print_command: true, print_command_output: true)
        android_serial = (serial != '') ? 'ANDROID_SERIAL=#{serial}' : nil
        command = [android_serial, escaped_gradle_path, task, flags].compact.join(' ')
        Action.sh(command, print_command: print_command, print_command_output: print_command_output)
      end
    
          it 'does set the exclude directories' do
        result = Fastlane::FastFile.new.parse('lane :test do
            cloc(exclude_dir: 'test1,test2,build')
          end').runner.execute(:test)
    
        context 'GIT-SVN repository' do
      before do
        allow(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_svn?).and_return(false)
        expect(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_git_svn?).and_return(true)
        allow(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_git?).and_return(false)
        allow(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_hg?).and_return(false)
      end
    
          it 'pass a custom version number' do
        result = Fastlane::FastFile.new.parse('lane :test do
          increment_version_number(version_number: '1.4.3')
        end').runner.execute(:test)
    
    puts '\nDone.'

    
      def test_capture2_stdin_data_io
    IO.pipe {|r, w|
      w.write 'i'
      w.close
      o, s = Open3.capture2(RUBY, '-e', 'i=STDIN.read; print i+'o'', :stdin_data=>r)
      assert_equal('io', o)
      assert(s.success?)
    }
  end
    
        # Fails on linux due to pow() bugs in glibc: http://sources.redhat.com/bugzilla/show_bug.cgi?id=3866
    platform_is_not :linux do
      it 'returns positive Infinity when self < -1' do
        (Rational(-2) ** bignum_value).infinite?.should == 1
        (Rational(-2) ** (bignum_value + 1)).infinite?.should == 1
        (Rational(fixnum_min) ** bignum_value).infinite?.should == 1
      end
    
    describe 'CApiWrappedStruct' do
  before :each do
    @s = CApiWrappedStructSpecs.new
  end
    
        Object.send :remove_const, :RUBY_PATCHLEVEL
    Object.send :const_set,    :RUBY_PATCHLEVEL, -1
    Object.send :remove_const, :RUBY_REVISION if defined?(RUBY_REVISION)
    Object.send :const_set,    :RUBY_REVISION, 6
    
    desc 'Update configurations to support publishing to root or sub directory'
task :set_root_dir, :dir do |t, args|
  puts '>>> !! Please provide a directory, eg. rake config_dir[publishing/subdirectory]' unless args.dir
  if args.dir
    if args.dir == '/'
      dir = ''
    else
      dir = '/' + args.dir.sub(/(\/*)(.+)/, '\\2').sub(/\/$/, '');
    end
    rakefile = IO.read(__FILE__)
    rakefile.sub!(/public_dir(\s*)=(\s*)([''])[\w\-\/]*['']/, 'public_dir\\1=\\2\\3public#{dir}\\3')
    File.open(__FILE__, 'w') do |f|
      f.write rakefile
    end
    compass_config = IO.read('config.rb')
    compass_config.sub!(/http_path(\s*)=(\s*)([''])[\w\-\/]*['']/, 'http_path\\1=\\2\\3#{dir}/\\3')
    compass_config.sub!(/http_images_path(\s*)=(\s*)([''])[\w\-\/]*['']/, 'http_images_path\\1=\\2\\3#{dir}/images\\3')
    compass_config.sub!(/http_fonts_path(\s*)=(\s*)([''])[\w\-\/]*['']/, 'http_fonts_path\\1=\\2\\3#{dir}/fonts\\3')
    compass_config.sub!(/css_dir(\s*)=(\s*)([''])[\w\-\/]*['']/, 'css_dir\\1=\\2\\3public#{dir}/stylesheets\\3')
    File.open('config.rb', 'w') do |f|
      f.write compass_config
    end
    jekyll_config = IO.read('_config.yml')
    jekyll_config.sub!(/^destination:.+$/, 'destination: public#{dir}')
    jekyll_config.sub!(/^subscribe_rss:\s*\/.+$/, 'subscribe_rss: #{dir}/atom.xml')
    jekyll_config.sub!(/^root:.*$/, 'root: /#{dir.sub(/^\//, '')}')
    File.open('_config.yml', 'w') do |f|
      f.write jekyll_config
    end
    rm_rf public_dir
    mkdir_p '#{public_dir}#{dir}'
    puts '## Site's root directory is now '/#{dir.sub(/^\//, '')}' ##'
  end
end
    
            def stock_location
          @stock_location ||= StockLocation.accessible_by(current_ability, :read).find(params[:id])
        end
    
        puts 'Downloading #{url}'
    actual_sha1 = download(url, output)