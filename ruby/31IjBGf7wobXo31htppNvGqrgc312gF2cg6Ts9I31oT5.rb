
        
              def move_back(skip: false, force: false, command: nil, **options)
        if Utils.path_occupied?(source)
          message = 'It seems there is already #{self.class.english_article} #{self.class.english_name} at '#{source}''
          raise CaskError, '#{message}.' unless force
          opoo '#{message}; overwriting.'
          delete(source, force: force, command: command, **options)
        end
    
    
    
    module RailsCommandHelpers
  def framework_version?(version_string)
    framework_version =~ /^#{version_string}/
  end
    
    class PaperclipGenerator < ActiveRecord::Generators::Base
  desc 'Create a migration to add paperclip-specific fields to your model. ' +
       'The NAME argument is the name of your model, and the following ' +
       'arguments are the name of the attachments'