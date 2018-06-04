
        
        module VagrantPlugins
  module CommandBox
    module Command
      class Remove < Vagrant.plugin('2', :command)
        def execute
          options = {}
          options[:force] = false
    
      def_delegators :@logger, :log, :log_status, :log_processing, :log_transform, :log_file_info, :log_processed, :log_http_get_file, :log_http_get_files, :silence_log