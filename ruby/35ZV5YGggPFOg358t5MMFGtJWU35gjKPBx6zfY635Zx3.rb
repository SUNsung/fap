
        
              message = TestMailer.send_test(args[:to_address])
      Email::Sender.new(message, :test_message).send
    end
    
        # Gets the last git commit information formatted into a String by the provided
    # pretty format String. See the git-log documentation for valid format placeholders
    def self.last_git_commit_formatted_with(pretty_format, date_format = nil)
      command = ['git log -1']
      command << '--pretty=\'#{pretty_format}\''
      command << '--date=\'#{date_format}\'' if date_format
      Actions.sh(command.compact.join(' '), log: false).chomp
    rescue
      nil
    end
    
      private
    
      # Finds the projects '@user' contributed to, limited to either public projects
  # or projects visible to the given user.
  #
  # current_user - When given the list of the projects is limited to those only
  #                visible by this user.
  #
  # Returns an ActiveRecord::Relation.
  def execute(current_user = nil)
    segments = all_projects(current_user)
    
      # Finds the groups of the source user, optionally limited to those visible to
  # the current user.
  def execute(current_user = nil)
    segments = all_groups(current_user)
    
      def all_projects(current_user)
    projects = []
    
    module Docs
  class PageDb
    attr_reader :pages
    
          def get_type
        case slug
        when 'api'
          'Reference'
        when 'configuration'
          'Reference: Configuration'
        when 'stpl'
          'Reference: SimpleTemplate'
        when 'plugindev'
          'Reference: Plugin'
        else
          'Manual'
        end
      end
    
            # Move dummy anchor to method and property name
    
            rows.each do |row|
          line = row.values.each_with_index.map do |value, col|
            value.to_s.ljust(col_widths[col])
          end.join(' ').rstrip
          line = color.colorize(line, row.color) if row.color
          puts line
        end
      end
    
        def ensure_stage
      Rake::Task.define_task(:ensure_stage) do
        unless stage_set?
          puts t(:stage_not_set)
          exit 1
        end
      end
    end
    
            def destroy
          authorize! :destroy, stock_location
          stock_location.destroy
          respond_with(stock_location, status: 204)
        end
    
            def create
          authorize! :create, StockMovement
          @stock_movement = scope.new(stock_movement_params)
          if @stock_movement.save
            respond_with(@stock_movement, status: 201, default_template: :show)
          else
            invalid_resource!(@stock_movement)
          end
        end
    
    
require 'uri'
require 'cgi'
require File.expand_path(File.join(File.dirname(__FILE__), '..', 'support', 'paths'))
require File.expand_path(File.join(File.dirname(__FILE__), '..', 'support', 'selectors'))
    
        EXIF_ROTATED_ORIENTATION_VALUES = [5, 6, 7, 8]
    
            def matches? subject
          @subject = subject
          @subject = @subject.new if @subject.class == Class
          lower_than_low? && higher_than_low? && lower_than_high? && higher_than_high?
        end