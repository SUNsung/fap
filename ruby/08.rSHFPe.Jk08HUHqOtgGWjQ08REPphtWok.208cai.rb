
        
        TEST_DIR = File.expand_path('../test', __dir__)
    
    # You can also do other things. Examples:
# https://github.com/tmm1/stackprof/blob/master/bin/stackprof
report = StackProf::Report.new(Marshal.load(IO.binread(PROF_OUTPUT_FILE)))
report.print_text(
  options[:sort],
  options[:limit],
  options[:select_files],
  options[:reject_files],
  options[:select_names],
  options[:reject_names]
)
    
    require 'json'
require 'open-uri'
    
              # TODO: replace above lines with
          # confirmable = find_or_initialize_with_error_by(:confirmation_token, confirmation_token)
          # after enough time has passed that Devise clients do not use digested tokens
    
      # GET /resource/password/edit?reset_password_token=abcdef
  def edit
    self.resource = resource_class.new
    set_minimum_password_length
    resource.reset_password_token = params[:reset_password_token]
  end
    
      def respond_to_on_destroy
    # We actually need to hardcode this as Rails default responder doesn't
    # support returning empty response on GET request
    respond_to do |format|
      format.all { head :no_content }
      format.any(*navigational_formats) { redirect_to after_sign_out_path_for(resource_name) }
    end
  end
end

    
          def remember_me_is_active?(resource)
        return false unless resource.respond_to?(:remember_me)
        scope = Devise::Mapping.find_scope!(resource)
        _, token, generated_at = cookies.signed[remember_key(resource, scope)]
        resource.remember_me?(token, generated_at)
      end
    
          describe 'setting an internal hosts filter' do
        subject { dsl.roles(:app) }
        it 'is ignored' do
          dsl.set :filter, hosts: 'example3.com'
          expect(subject.map(&:hostname)).to eq(['example3.com', 'example4.com'])
        end
      end
    
    task default: :test
    
            #target = $LOADED_FEATURES.grep(/#{path}/).first
        #puts path
        #puts caller.map { |c| '  #{c}' }.join('\n')
        #fontsize = [10, duration * 48].max
        puts '#{duration},#{path},#{source}'
      end
      #puts caller.map { |c| ' => #{c}' }.join('\n')
    end
    
        def definitions_for(klass)
      parent_classes = klass.ancestors.reverse
      parent_classes.each_with_object({}) do |ancestor, inherited_definitions|
        inherited_definitions.deep_merge! @attachments[ancestor]
      end
    end
  end
end

    
        def empty_file?
      File.exist?(@filepath) && File.size(@filepath) == 0
    end
    
            Paperclip::Validators.constants.each do |constant|
          if constant.to_s =~ /\AAttachment(.+)Validator\z/
            validator_kind = $1.underscore.to_sym