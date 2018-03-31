
        
          def validate_type
    errors.add(:type, 'cannot be changed once an instance has been created') if type_changed? && !new_record?
    errors.add(:type, 'is not a valid type') unless self.class.valid_type?(type)
  end
    
      def toggle_availability
    @service = current_user.services.find(params[:id])
    @service.toggle_availability!
    
      def new
    @user_credential = current_user.user_credentials.build
    
          interp = node_or_interp
      after_string_or_interp =
        if interp.after
          to_string_interpolation(interp.after)
        else
          string_literal('')
        end
      if interp.after && interp.whitespace_after
        after_string_or_interp = concat(string_literal(' '), after_string_or_interp)
      end
    
            def self.options
          [[
            '--all', 'Remove all the cached pods without asking'
          ]].concat(super)
        end
    
            self.description = <<-DESC
          Shows the content of the pods cache as a YAML tree output, organized by pod.
          If `NAME` is given, only the caches for that pod will be included in the output.
        DESC
    
        node_cache[:regexp][start_index] = r0