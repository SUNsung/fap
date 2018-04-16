
        
        group :test do
  gem 'omniauth-facebook'
  gem 'omniauth-openid'
  gem 'webrat', '0.7.3', require: false
  gem 'mocha', '~> 1.1', require: false
end
    
    if defined?(ActionMailer)
  class Devise::Mailer < Devise.parent_mailer.constantize
    include Devise::Mailers::Helpers
    
                sequence_base := (
              'x' ||
              -- Take the first two bytes (four hex characters)
              substr(
                -- Of the MD5 hash of the data we documented
                md5(table_name ||
                  '#{SecureRandom.hex(16)}' ||
                  time_part::text
                ),
                1, 4
              )
            -- And turn it into a bigint
            )::bit(16)::bigint;
    
      def id
    object.id.to_s
  end
    
          module ClassMethods
        def inherited(subclass)
          subclass.log_levels = subclass.superclass.log_levels.dup
        end
    
      def default_metadata
    @factory.build(:default_metadata).all
  end
    
          def get_shallow(*path)
        snapshot.metric_store.get_shallow(*path)
      end