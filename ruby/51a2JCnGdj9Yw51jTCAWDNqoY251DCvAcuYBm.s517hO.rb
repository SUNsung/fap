
        
            if ARGV.named.empty?
      slow_checks = %w[
        check_for_broken_symlinks
        check_missing_deps
        check_for_outdated_homebrew
        check_for_linked_keg_only_brews
      ]
      methods = (checks.all.sort - slow_checks) + slow_checks
    else
      methods = ARGV.named
    end
    
      def set_table_sort(sort_options)
    valid_sorts = sort_options[:sorts] or raise ArgumentError.new('You must specify :sorts as an array of valid sort attributes.')
    default = sort_options[:default] || { valid_sorts.first.to_sym => :desc }
    
      before_action :upgrade_warning, only: :index
    
    module AccountFinderConcern
  extend ActiveSupport::Concern
    
      # After we load the schema, make sure we have sequences for each
  # table using timestamp IDs.
  Rake::Task['db:schema:load'].enhance do
    Rake::Task['db:ensure_id_sequences_exist'].invoke
  end
    
      def deliver_digest
    NotificationMailer.digest(user.account).deliver_now!
    user.touch(:last_emailed_at)
  end
end

    
      # Preview this email at http://localhost:3000/rails/mailers/notification_mailer/favourite
  def favourite
    f = Favourite.last
    NotificationMailer.favourite(f.status.account, Notification.find_by(activity: f))
  end
    
      def participation_count
    poll_answers.sum('vote_count')
  end
end

    
      def delete_from_facebook(url, body)
    Faraday.delete(url, body)
  end
end

    
    get '/' do
  halt erb(:login) unless params[:user]
  erb :chat, :locals => { :user => params[:user].gsub(/\W/, '') }
end
    
      it 'should not leak changes to env' do
    klass    = described_class
    detector = Struct.new(:app) do
      def call(env)
        was = env.dup
        res = app.call(env)
        was.each do |k,v|
          next if env[k] == v
          fail 'env[#{k.inspect}] changed from #{v.inspect} to #{env[k].inspect}'
        end
        res
      end
    end
    
          class ValidateAttachmentPresenceMatcher
        def initialize attachment_name
          @attachment_name = attachment_name
        end
    
      class Railtie
    def self.insert
      Paperclip.options[:logger] = Rails.logger
    
          def validate_each(record, attribute, value)
        base_attribute = attribute.to_sym
        attribute = '#{attribute}_content_type'.to_sym
        value = record.send :read_attribute_for_validation, attribute
    
          def validate_whitelist(record, attribute, value)
        if allowed.present? && allowed.none? { |type| type === value }
          mark_invalid record, attribute, allowed
        end
      end