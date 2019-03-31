              yield item, value, text, default_html_options.merge(additional_html_options)
            end.join.html_safe
          end
    
    require 'action_view/helpers/tags/placeholderable'
    
              redirect_to admin_reports_path, notice: I18n.t('admin.reports.resolved_msg')
          return
        end
    
    module ExportControllerConcern
  extend ActiveSupport::Concern
    
        context 'single argument' do
      before do
        subject.instance_eval do
          env :userpaths
        end
      end
    
      def send_sinatra_file(path, &missing_file_block)
    file_path = File.join(File.dirname(__FILE__), 'public',  path)
    file_path = File.join(file_path, 'index.html') unless file_path =~ /\.[a-z]+$/i
    File.exist?(file_path) ? send_file(file_path) : missing_file_block.call
  end
    
          rtn = ''
      (context.environments.first['site'][@array_name] || []).each do |file|
        if file !~ /^[a-zA-Z0-9_\/\.-]+$/ || file =~ /\.\// || file =~ /\/\./
          rtn = rtn + 'Include file '#{file}' contains invalid characters or sequences'
        end
    
    module Jekyll
    
    # The base module that gets included in ActiveRecord::Base. See the
# documentation for Paperclip::ClassMethods for more useful information.
module Paperclip
  extend Helpers
  extend Logger
  extend ProcessorHelpers
    
        # Returns the interpolated URL. Will raise an error if the url itself
    # contains ':url' to prevent infinite recursion. This interpolation
    # is used in the default :path to ease default specifications.
    RIGHT_HERE = '#{__FILE__.gsub(%r{\A\./}, '')}:#{__LINE__ + 3}'
    def url attachment, style_name
      raise Errors::InfiniteInterpolationError if caller.any?{|b| b.index(RIGHT_HERE) }
      attachment.url(style_name, :timestamp => false, :escape => false)
    end