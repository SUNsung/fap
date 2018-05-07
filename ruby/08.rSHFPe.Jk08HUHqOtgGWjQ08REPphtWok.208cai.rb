  def std?
    @settings.include? :std
  end
    
        if !updated
      puts 'Already up-to-date.'
    elsif hub.empty?
      puts 'No changes to formulae.'
    else
      hub.dump
      hub.reporters.each(&:migrate_tap_migration)
      hub.reporters.each(&:migrate_formula_rename)
      Descriptions.update_cache(hub)
    end
    
            if params[:default_keychain]
          # if there is no default keychain - setting the original will fail - silent this error
          begin
            Actions.lane_context[Actions::SharedValues::ORIGINAL_DEFAULT_KEYCHAIN] = Fastlane::Actions.sh('security default-keychain', log: false).strip
          rescue
          end
          commands << Fastlane::Actions.sh('security default-keychain -s #{keychain_path}', log: false)
        end
    
        def render(options, screenshots)
      Dir.mktmpdir do |dir|
        path = generator.render(options, screenshots, dir)
        return File.read(path)
      end
    end
  end
    
            expect(result).to eq('git rev-parse --short HEAD')
        expect(Fastlane::Actions.lane_context[Fastlane::Actions::SharedValues::BUILD_NUMBER_REPOSITORY]).to eq('git rev-parse --short HEAD')
      end
    end
    
    puts '\nDone.'
