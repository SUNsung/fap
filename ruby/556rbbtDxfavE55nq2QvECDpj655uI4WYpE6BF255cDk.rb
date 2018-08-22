
        
          def validate_type
    errors.add(:type, 'cannot be changed once an instance has been created') if type_changed? && !new_record?
    errors.add(:type, 'is not a valid type') unless self.class.valid_type?(type)
  end
    
      def present_hash(hash, skip_key = nil)
    hash.to_a.sort_by {|a| a.first.to_s }.map { |k, v| '#{k}: #{v}' unless k.to_s == skip_key.to_s }.compact
  end
end

    
    module SortableTable
  extend ActiveSupport::Concern
    
            self.description = <<-DESC
          Remove the cache for a given pod, or clear the cache completely.
    
            private
    
            # Runs the template configuration utilities.
        #
        # @return [void]
        #
        def configure_template
          UI.section('Configuring #{@name} template.') do
            Dir.chdir(@name) do
              if File.exist?('configure')
                system({ 'COCOAPODS_VERSION' => Pod::VERSION }, './configure', @name, *@additional_args)
              else
                UI.warn 'Template does not have a configure file.'
              end
            end
          end
        end
    
          def update_if_necessary!
        if @update && config.verbose?
          UI.section('\nUpdating Spec Repositories\n'.yellow) do
            Repo.new(ARGV.new(['update'])).run
          end
        end
      end