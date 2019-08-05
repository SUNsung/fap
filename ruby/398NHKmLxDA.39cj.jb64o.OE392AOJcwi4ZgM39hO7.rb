
        
          # Ignore bad email addresses and do not raise email delivery errors.
  # Set this to true and configure the email server for immediate delivery to raise delivery errors.
  # config.action_mailer.raise_delivery_errors = false
    
      test 'singular resource output in rails routes' do
    app_file 'config/routes.rb', <<-RUBY
      Rails.application.routes.draw do
        resource :post
        resource :user_permission
      end
    RUBY
    
        def run(path, color = nil)
      unless color
        color = Frameit::Color::BLACK
        color = Frameit::Color::SILVER if Frameit.config[:white] || Frameit.config[:silver]
        color = Frameit::Color::GOLD if Frameit.config[:gold]
        color = Frameit::Color::ROSE_GOLD if Frameit.config[:rose_gold]
      end
    
        context 'when semantic version' do
      it 'returns the current version once parsed' do
        test_content = 'spec.version = '1.3.2''
        result = @version_podspec_file.parse(test_content)
        expect(result).to eq('1.3.2')
        expect(@version_podspec_file.version_value).to eq('1.3.2')
        expect(@version_podspec_file.version_match[:major]).to eq('1')
        expect(@version_podspec_file.version_match[:minor]).to eq('3')
        expect(@version_podspec_file.version_match[:patch]).to eq('2')
      end
    
          module ExternalState
        PROCESSING = 'PROCESSING'
        PROCESSING_EXCEPTION = 'PROCESSING_EXCEPTION'
        MISSING_EXPORT_COMPLIANCE = 'MISSING_EXPORT_COMPLIANCE'
        READY_FOR_BETA_TESTING = 'READY_FOR_BETA_TESTING'
        IN_BETA_TESTING = 'IN_BETA_TESTING'
        EXPIRED = 'EXPIRED'
        READY_FOR_BETA_SUBMISSION = 'READY_FOR_BETA_SUBMISSION'
        IN_EXPORT_COMPLIANCE_REVIEW = 'IN_EXPORT_COMPLIANCE_REVIEW'
        WAITING_FOR_BETA_REVIEW = 'WAITING_FOR_BETA_REVIEW'
        IN_BETA_REVIEW = 'IN_BETA_REVIEW'
        BETA_REJECTED = 'BETA_REJECTED'
        BETA_APPROVED = 'BETA_APPROVED'
      end
    
          attr_accessor :bundle_id_capabilities
    
        def deprecation_messages
      [
        RBENVRVM_DEP_MSG,
        TABS_DEP_MSG,
        CLIARGS_DEP_MSG,
        SYNC_DEP_MSG,
        PRE_DEP_MSG,
        POST_DEP_MSG
      ]
    end
    
        def _project_root
      project.root if project.root?
    end