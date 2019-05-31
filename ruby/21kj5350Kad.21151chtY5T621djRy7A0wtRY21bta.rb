
        
        module Admin
  class ReportNotesController < BaseController
    before_action :set_report_note, only: [:destroy]
    
      private
    
      def compatible_locale
    http_accept_language.compatible_language_from(available_locales)
  end
    
        @save_to.each { |_, v| FileUtils.mkdir_p(v) }
    
        def initialize(*args)
      @s = StringScanner.new(*args)
    end
    
          expect(Notification.find(note.id).unread).to eq(true)
    end
  end
    
            if Utils::HttpClient.remote_file_exist?(uri)
          PluginManager.ui.debug('Found package at: #{uri}')
          return LogStash::PluginManager::PackInstaller::Remote.new(uri)
        else
          PluginManager.ui.debug('Package not found at: #{uri}')
          return nil
        end
      rescue SocketError, Errno::ECONNREFUSED, Errno::EHOSTUNREACH => e
        # This probably means there is a firewall in place of the proxy is not correctly configured.
        # So lets skip this strategy but log a meaningful errors.
        PluginManager.ui.debug('Network error, skipping Elastic pack, exception: #{e}')