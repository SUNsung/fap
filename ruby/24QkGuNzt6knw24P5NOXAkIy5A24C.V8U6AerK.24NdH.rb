
        
              it 'renders HTML' do
        capture = render(options, screenshots)
        expect(capture).to match(/<html>/)
        expect(capture).to include('<li>Some</li>')
        expect(capture).to include('<li>key</li>')
        expect(capture).to include('<li>words</li>')
      end
    end
    
            command = [escaped_gradle_path, 'tasks', '--console=plain'].join(' ')
        output = Action.sh(command, print_command: false, print_command_output: false)
        output.split('\n').each do |line|
          if (result = line.match(/(\w+)\s\-\s([\w\s]+)/))
            self.tasks << GradleTask.new(title: result[1], description: result[2])
          end
        end
    
            expect(result).to eq('hg parent --template {rev}')
        expect(Fastlane::Actions.lane_context[Fastlane::Actions::SharedValues::BUILD_NUMBER_REPOSITORY]).to eq('hg parent --template {rev}')
      end
    end
  end
end

    
          assert_contain 'Invalid email address'
      refute warden.authenticated?(:admin)
    end
  end
    
          def initialize(*args, &block)
        @bypass_confirmation_postpone = false
        @skip_reconfirmation_in_callback = false
        @reconfirmation_required = false
        @skip_confirmation_notification = false
        @raw_confirmation_token = nil
        super
      end
    
        # Check if a reset_password_token is provided in the request
    def assert_reset_token_passed
      if params[:reset_password_token].blank?
        set_flash_message(:alert, :no_token)
        redirect_to new_session_path(resource_name)
      end
    end
    
      # POST /resource/unlock
  def create
    self.resource = resource_class.send_unlock_instructions(resource_params)
    yield resource if block_given?
    
        def unlock_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :unlock_instructions, opts)
    end
    
          def remember_cookie_values(resource)
        options = { httponly: true }
        options.merge!(forget_cookie_values(resource))
        options.merge!(
          value: resource.class.serialize_into_cookie(resource),
          expires: resource.remember_expires_at
        )
      end
    
    module RuboCop
  module Cop
    module FormulaAudit
      # This cop audits urls and mirrors in Formulae
      class Urls < FormulaCop
        def audit_formula(_node, _class_node, _parent_class_node, body_node)
          urls = find_every_func_call_by_name(body_node, :url)
          mirrors = find_every_func_call_by_name(body_node, :mirror)
    
              # Check if command-line is wrongly used in formula's desc
          if match = regex_match_group(desc, /(command ?line)/i)
            c = match.to_s.chars.first
            problem 'Description should use \'#{c}ommand-line\' instead of \'#{match}\''
          end
    
      def create_scaffold(source, target)
    transform_r(source, target)
  end
    
            def description
          'have an attachment named #{@attachment_name}'
        end