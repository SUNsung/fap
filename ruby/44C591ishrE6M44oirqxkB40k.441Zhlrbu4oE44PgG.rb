
        
        module AbstractController
  module Testing
    class ControllerWithHelpers < AbstractController::Base
      include AbstractController::Helpers
      include AbstractController::Rendering
      include ActionView::Rendering
    
      alias_method :secret?, :secret
  alias_method :persisted?, :persisted
    
            self.arguments = [
          CLAide::Argument.new('NAME', false),
        ]
    
          def self.options
        options = []
        options.concat(super.reject { |option, _| option == '--silent' })
      end
    
            def self.options
          [
            ['--regex', 'Interpret the `QUERY` as a regular expression'],
            ['--show-all', 'Pick from all versions of the given podspec'],
          ].concat(super)
        end
    
      # Raises error for missing translations
  # config.action_view.raise_on_missing_translations = true