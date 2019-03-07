
        
                case array.length
        when 0
          ''.html_safe
        when 1
          ERB::Util.html_escape(array[0])
        when 2
          safe_join([array[0], array[1]], options[:two_words_connector])
        else
          safe_join([safe_join(array[0...-1], options[:words_connector]), options[:last_word_connector], array[-1]], nil)
        end
      end
    end
  end
end

    
                  accept = if current_value.respond_to?(:call)
                current_value.call(item)
              else
                Array(current_value).map(&:to_s).include?(value.to_s)
              end
    
            class << self
          def field_type
            @field_type ||= name.split('::').last.sub('Field', '').downcase
          end
        end
    
        def initialize_copy(other)
      @paths = other.paths.dup
      self
    end
    
    class ActivityPub::OutboxesController < Api::BaseController
  LIMIT = 20
    
        def set_email_domain_block
      @email_domain_block = EmailDomainBlock.find(params[:id])
    end
    
              redirect_to admin_reports_path, notice: I18n.t('admin.reports.resolved_msg')
          return
        end
    
      respond_to :json
    
      def setting
    @_setting ||= ::Web::Setting.where(user: current_user).first_or_initialize(user: current_user)
  end
end

    
      Devise.omniauth_configs.each_key do |provider|
    provides_callback_for provider
  end
    
      def set_rate_limit_headers
    apply_header_limit
    apply_header_remaining
    apply_header_reset
  end
    
    describe 'Kernel#sleep' do
  it 'is a private method' do
    Kernel.should have_private_instance_method(:sleep)
  end
    
      it 'calls #to_path on second argument when passed ?e and a filename' do
    p = mock('path')
    p.should_receive(:to_path).and_return @file
    Kernel.test(?e, p)
  end
    
    describe 'main#define_method' do
  before :each do
    @code = 'define_method(:boom) { :bam }'
  end
    
    Before do
  gemfile = ENV['BUNDLE_GEMFILE'].to_s
  ENV['BUNDLE_GEMFILE'] = File.join(Dir.pwd, gemfile) unless gemfile.start_with?(Dir.pwd)
  @framework_version = nil
end
    
      def migration_name
    'add_attachment_#{attachment_names.join('_')}_to_#{name.underscore.pluralize}'
  end
    
    begin
  # Use mime/types/columnar if available, for reduced memory usage
  require 'mime/types/columnar'
rescue LoadError
  require 'mime/types'
end
    
        EMPTY_TYPE = 'inode/x-empty'
    SENSIBLE_DEFAULT = 'application/octet-stream'