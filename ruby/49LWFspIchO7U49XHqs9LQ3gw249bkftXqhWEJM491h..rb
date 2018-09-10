
        
            def self.rm_DS_Store
      paths = Queue.new
      %w[Cellar Frameworks Library bin etc include lib opt sbin share var].
        map { |p| HOMEBREW_PREFIX/p }.each { |p| paths << p if p.exist? }
      workers = (0...Hardware::CPU.cores).map do
        Thread.new do
          begin
            while p = paths.pop(true)
              quiet_system 'find', p, '-name', '.DS_Store', '-delete'
            end
          rescue ThreadError # ignore empty queue error
          end
        end
      end
      workers.map(&:join)
    end
    
      # Use this method to generate standard caveats.
  def standard_instructions(home_name, home_value = libexec)
    <<-EOS.undent
      Before you can use these tools you must export some variables to your $SHELL.
    
            it 'sets up screenshots folder in fastlane folder' do
          expect(options[:screenshots_path]).to eq('./fastlane/screenshots')
        end
    
            it 'review_user_needed is true' do
          uploader.send('set_review_information', version, options)
          expect(version).to have_received(:review_user_needed=).with(true)
        end
      end
    
          def self.details
        'see adb --help for more details'
      end
    
        s = StringIO.new
    SystemConfig.dump_verbose_config s
    # Dummy summary file, asciibetically first, to control display title of gist
    files['# #{f.name} - #{timestamp}.txt'] = { content: brief_build_info(f) }
    files['00.config.out'] = { content: s.string }
    files['00.doctor.out'] = { content: Utils.popen_read('#{HOMEBREW_PREFIX}/bin/brew', 'doctor', err: :out) }
    unless f.core_formula?
      tap = <<~EOS
        Formula: #{f.name}
        Tap: #{f.tap}
        Path: #{f.path}
      EOS
      files['00.tap.out'] = { content: tap }
    end
    
        # Exclude cache, logs, and repository, if they are located under the prefix.
    [HOMEBREW_CACHE, HOMEBREW_LOGS, HOMEBREW_REPOSITORY].each do |dir|
      dirs.delete dir.relative_path_from(HOMEBREW_PREFIX).to_s
    end
    dirs.delete 'etc'
    dirs.delete 'var'
    
        Keg::PRUNEABLE_DIRECTORIES.each do |dir|
      next unless dir.directory?
      dir.find do |path|
        path.extend(ObserverPathnameExtension)
        if path.symlink?
          unless path.resolved_path_exists?
            if path.to_s =~ Keg::INFOFILE_RX
              path.uninstall_info unless ARGV.dry_run?
            end
    
    When /^I fill out change password section with my password and '([^']*)' and '([^']*)'$/ do |new_pass, confirm_pass|
  fill_change_password_section(@me.password, new_pass, confirm_pass)
end
    
    When /^(?:|I )click on '([^']*)' navbar title$/ do |title|
  with_scope('.info-bar') do
    find('h5', text: title).click
  end
end

    
      failure_message_for_should do |actual|
    'expected #{actual.inspect} to have value #{expected.inspect} but was #{actual.value.inspect}'
  end
  failure_message_for_should_not do |actual|
    'expected #{actual.inspect} to not have value #{expected.inspect} but it had'
  end
end
    
          sign_in alice, scope: :user
    end