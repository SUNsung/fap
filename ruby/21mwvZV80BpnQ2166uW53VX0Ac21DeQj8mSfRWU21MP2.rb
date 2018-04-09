
        
          included do
    self.validate :validate_email_options
  end
    
      def tumblr_consumer_secret
    ENV['TUMBLR_OAUTH_SECRET']
  end
    
        respond_to do |format|
      format.html { redirect_to jobs_path, notice: 'All jobs removed.' }
      format.json { head :no_content }
    end
  end
    
        @services = current_user.services.reorder(table_sort).page(params[:page])
    
    require 'builder'
require 'feedbag'
require 'nokogiri'
    
          def calculate_column_widths(rows)
        num_columns = rows.map { |row| row.values.length }.max
        Array.new(num_columns) do |col|
          rows.map { |row| row.values[col].to_s.length }.max
        end
      end
    
          private
    
        def deploying?
      fetch(:deploying, false)
    end
  end
end

    
      # Implemented by subclasses to define Rake tasks. Typically a plugin will call
  # `eval_rakefile` to load Rake tasks from a separate .rake file.
  #
  # Example:
  #
  #   def define_tasks
  #     eval_rakefile File.expand_path('../tasks.rake', __FILE__)
  #   end
  #
  # For simple tasks, you can define them inline. No need for a separate file.
  #
  #   def define_tasks
  #     desc 'Do something fantastic.'
  #     task 'my_plugin:fantastic' do
  #       ...
  #     end
  #   end
  #
  def define_tasks; end