
        
            groups << @user.authorized_groups.visible_to_user(current_user) if current_user
    groups << @user.authorized_groups.public_to_user(current_user)
    
        def log_processing(name)
      puts yellow '  #{File.basename(name)}'
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