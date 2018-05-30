
        
            Or via the Cask:
      brew cask install ngrok
    EOS
  end
end

    
    module Homebrew
  def config
    dump_verbose_config
  end
    
        # Exclude cache, logs, and repository, if they are located under the prefix.
    [HOMEBREW_CACHE, HOMEBREW_LOGS, HOMEBREW_REPOSITORY].each do |dir|
      dirs.delete dir.relative_path_from(HOMEBREW_PREFIX).to_s
    end
    dirs.delete 'etc'
    dirs.delete 'var'
    
    #
# Railties
#
    
    sitelist = ARGV.shift() || usage()
output   = ARGV.shift() || usage()
    
    #Rjb::load('.', jvmargs=[])
Rjb::load('#{ENV['JAVA_HOME']}/lib/tools.jar:.',jvmargs=[])
    
            raise t('error.invalid_stage_name', name: invalid, path: stage_config_path.join('#{invalid}.rb'))
      end
    end
  end
end

    
      desc 'Rollback to previous release.'
  task :rollback do
    %w{ starting started
        reverting reverted
        publishing published
        finishing_rollback finished }.each do |task|
      invoke 'deploy:#{task}'
    end
  end
end
    
      it 'provides a --format option which enables the choice of output formatting'