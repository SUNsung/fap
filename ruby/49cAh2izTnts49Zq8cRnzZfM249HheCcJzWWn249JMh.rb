
        
        def bottle_file_outdated?(f, file)
  filename = file.basename.to_s
  return unless f.bottle && filename.match(Pathname::BOTTLE_EXTNAME_RX)
    
      def observe_file_removal(path)
    path.extend(ObserverPathnameExtension).unlink if path.exist?
  end
    
        def self.cleanup_logs
      return unless HOMEBREW_LOGS.directory?
      HOMEBREW_LOGS.subdirs.each do |dir|
        cleanup_path(dir) { dir.rmtree } if prune?(dir, :days_default => 14)
      end
    end
    
        # Unbrewed uses the PREFIX, which will exist
    # Things below use the CELLAR, which doesn't until the first formula is installed.
    unless HOMEBREW_CELLAR.exist?
      raise NoSuchKegError.new(ARGV.named.first) if ARGV.named.any?
      return
    end
    
      def self.canonical_name(name)
    Formulary.canonical_name(name)
  end
    
          @launch_event_sent = true
      builder = AnalyticsEventBuilder.new(
        p_hash: launch_context.p_hash,
        session_id: session_id,
        action_name: nil,
        fastlane_client_language: launch_context.fastlane_client_language
      )
    
          it 'adds docset_bundle_name param to command' do
        result = Fastlane::FastFile.new.parse('lane :test do
          appledoc(
            project_name: 'Project Name',
            project_company: 'Company',
            input: 'input/dir',
            docset_bundle_name: 'Bundle name'
          )
        end').runner.execute(:test)
    
            Fastlane::FastFile.new.parse('lane :test do
          import_certificate ({
            keychain_name: '#{keychain}',
            certificate_path: '#{cert_name}',
            certificate_password: '#{password}',
            log_output: true
          })
        end').runner.execute(:test)
      end
    end
  end
end

    
            expect(result).to include(' -rule #{rule.shellescape} ')
        expect(result).to include(' -disable-rule #{rule.shellescape} ')
      end
    
            FastlaneCore::CertChecker.installed_identies
      end
    end