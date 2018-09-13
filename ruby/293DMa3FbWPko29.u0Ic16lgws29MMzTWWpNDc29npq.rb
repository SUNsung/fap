
        
          # @private
  def used_options
    @options & @args
  end
    
        # The category for users with trust level 3 has been created.
    # Add initial permissions and description. They can be changed later.
    
    class ActivityPub::CollectionsController < Api::BaseController
  include SignatureVerification
    
        def resource_params
      params.require(:email_domain_block).permit(:domain)
    end
  end
end

    
          if @report_note.save
        if params[:create_and_resolve]
          @report.resolve!(current_account)
          log_action :resolve, @report
    
      def hub_topic
    params['hub.topic']
  end
    
    require 'commands'
    
      def external_commands
    cmd_paths = PATH.new(ENV['PATH']).append(Tap.cmd_directories)
    cmd_paths.each_with_object([]) do |path, cmds|
      Dir['#{path}/brew-*'].each do |file|
        next unless File.executable?(file)
        cmd = File.basename(file, '.rb')[5..-1]
        next if cmd.include?('.')
        cmds << cmd
      end
    end.sort
  end
    
    module Homebrew
  module_function
    
        dirs = []
    
      def framework_major_version
    framework_version.split('.').first.to_i
  end
end
World(RailsCommandHelpers)

    
    class PaperclipGenerator < ActiveRecord::Generators::Base
  desc 'Create a migration to add paperclip-specific fields to your model. ' +
       'The NAME argument is the name of your model, and the following ' +
       'arguments are the name of the attachments'
    
        # True if the dimensions represent a square
    def square?
      height == width
    end