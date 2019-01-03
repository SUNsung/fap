
        
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
    
          if old_path.git?
        puts 'Changing remote from #{old_remote} to #{new_remote}...' if $stdout.tty?
        old_path.git_origin = new_remote
      end
    
            def ship
          @shipment.ship! unless @shipment.shipped?
          respond_with(@shipment, default_template: :show)
        end