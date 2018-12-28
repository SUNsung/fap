
        
        def run_rubygem(args)
  run_in_shell('gem', *args.strip.split(' '))
end
    
            log_action :change_email, @user
    
    module Admin
  class EmailDomainBlocksController < BaseController
    before_action :set_email_domain_block, only: [:show, :destroy]
    
            if params[:create_and_unresolve]
          @report.unresolve!
          log_action :reopen, @report
        end
    
          @form         = Form::StatusBatch.new(form_status_batch_params.merge(current_account: current_account, action: action_from_button))
      flash[:alert] = I18n.t('admin.statuses.failed_to_execute') unless @form.save
    
      private
    
      def payload
    @_payload ||= request.body.read
  end
    
      respond_to :json
    
            it 'does not use two's complement form for negative numbers for formats bBoxX' do
          format('%+b', -10).should == '-1010'
          format('%+B', -10).should == '-1010'
          format('%+o', -87).should == '-127'
          format('%+x', -196).should == '-c4'
          format('%+X', -196).should == '-C4'
        end
      end
    end
    
      it 'transfers control to the innermost catch block waiting for the same sympol' do
    one = two = three = 0
    catch :duplicate do
      catch :duplicate do
        catch :duplicate do
          one = 1
          throw :duplicate
        end
        two = 2
        throw :duplicate
      end
      three = 3
      throw :duplicate
    end
    [one, two, three].should == [1, 2, 3]
  end
    
      it 'accepts a proc argument instead of a block' do
    captured = nil
    
        # The name of the mixin in which the error occurred.
    # This could be `nil` if the error occurred outside a mixin.
    #
    # @return [String]
    def sass_mixin
      sass_backtrace.first[:mixin]
    end
    
    require 'bundler/cli'
require 'bundler/friendly_errors'
    
            return nil
      end
    end
  end
end end end

    
      def execute
    signal_deprecation_warning_for_pack
    
        not_matching_pipeline = described_class.new(source, pipeline_id, [], settings)
    expect(subject).not_to eq(not_matching_pipeline)
    
              it 'allow to install a specific version' do
            command = logstash.run_command_in_path('bin/logstash-plugin install --no-verify --version 0.1.0 logstash-filter-qatest')
            expect(command).to install_successfully
            expect(logstash).to have_installed?('logstash-filter-qatest', '0.1.0')
          end
        end
      end
    
        def self.clear
      instance.clear
    end