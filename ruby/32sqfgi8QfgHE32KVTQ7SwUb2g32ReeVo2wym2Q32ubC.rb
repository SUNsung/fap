
        
                  include_hidden = options.delete('include_hidden') { true }
          checkbox = tag('input', options)
    
            private
    
        initializer 'action_view.form_with_generates_remote_forms' do |app|
      ActiveSupport.on_load(:action_view) do
        form_with_generates_remote_forms = app.config.action_view.delete(:form_with_generates_remote_forms)
        ActionView::Helpers::FormHelper.form_with_generates_remote_forms = form_with_generates_remote_forms
      end
    end
    
      # GET /resource/confirmation?confirmation_token=abcdef
  def show
    self.resource = resource_class.confirm_by_token(params[:confirmation_token])
    yield resource if block_given?
    
      protected
    
      # GET /resource/unlock?unlock_token=abcdef
  def show
    self.resource = resource_class.unlock_access_by_token(params[:unlock_token])
    yield resource if block_given?
    
        def to_json
      JSON.generate(as_json)
    end
  end
end

    
        def request_one(url)
      raise NotImplementedError
    end
    
          def other
        css('#example', '.example', '#description_source', '#description_demo', '[id$='example']', 'hr').remove
    
    desc 'generates TOC'
task :toc, [:readme] do |t, a|
  a.with_defaults :readme => 'README.md'
    
    module Sinatra
  class Application < Base
    
            # Set these key values to boolean 'true' to include in policy
        NO_ARG_DIRECTIVES.each do |d|
          if options.key?(d) && options[d].is_a?(TrueClass)
            directives << d.to_s.sub(/_/, '-')
          end
        end
    
            expect(cop.offenses.size).to eq(1)
        expect(cop.highlights).to eq([close])
        expect(cop.messages).to eq([described_class::ALWAYS_NEW_LINE_MESSAGE])
      end
    
            self
      end