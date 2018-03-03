  # Allows a bottle tag to specify a specific OS or later,
  # so the same bottle can target multiple OSs.
  # Not used in core, used in taps.
  def find_or_later_tag(tag)
    begin
      tag_version = MacOS::Version.from_symbol(tag)
    rescue ArgumentError
      return
    end
    
      private
    
        if $stdout.tty?
      metacharacters = %w[\\ | ( ) [ ] { } ^ $ * + ? .]
      bad_regex = metacharacters.any? do |char|
        ARGV.any? do |arg|
          arg.include?(char) && !arg.start_with?('/')
        end
      end
      if ARGV.any? && bad_regex
        ohai 'Did you mean to perform a regular expression search?'
        ohai 'Surround your query with /slashes/ to search by regex.'
      end
    end
    
        initial_revision = ENV['HOMEBREW_UPDATE_BEFORE'].to_s
    current_revision = ENV['HOMEBREW_UPDATE_AFTER'].to_s
    if initial_revision.empty? || current_revision.empty?
      odie 'update-report should not be called directly!'
    end
    
          export JAVA_HOME='$(/usr/libexec/java_home)'
      export AWS_ACCESS_KEY='<Your AWS Access ID>'
      export AWS_SECRET_KEY='<Your AWS Secret Key>'
      export #{home_name}='#{home_value}'
    EOS
  end
end

    
      included do
    include Oauthable
    
    module SortableTable
  extend ActiveSupport::Concern
    
    require 'builder'
require 'feedbag'
require 'nokogiri'
    
          def handle_params_error(error, error_description)
        if params[:client_id] && params[:redirect_uri]
          handle_params_error_when_client_id_and_redirect_uri_exists(error, error_description)
        else
          render_error I18n.t('api.openid_connect.error_page.could_not_authorize'), error_description
        end
      end