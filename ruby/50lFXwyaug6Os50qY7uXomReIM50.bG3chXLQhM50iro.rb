
        
              if options[:type] == :array
        options[:roles] << :completable
        class_eval <<-EOF
          def complete_#{name}
            #{options[:values]}.map { |v| {text: v, id: v} }
          end
        EOF
      end
    
      def index
    @jobs = Delayed::Job.order('coalesce(failed_at,'1000-01-01'), run_at asc').page(params[:page])
    
    class REST::MediaAttachmentSerializer < ActiveModel::Serializer
  include RoutingHelper
    
    describe Settings::PreferencesController do
  render_views
    
      def as_json(options={})
    {
      poll_id:             id,
      post_id:             status_message.id,
      question:            question,
      poll_answers:        poll_answers,
      participation_count: participation_count
    }
  end
    
          private
    
        def define_remote_file_task(task, target_roles)
      Capistrano::UploadTask.define_task(task) do |t|
        prerequisite_file = t.prerequisites.first
        file = shared_path.join(t.name)
    
      # Implemented by subclasses to hook into Capistrano's deployment flow using
  # using the `before` and `after` DSL methods. Note that `register_hooks` will
  # not be called if the user has opted-out of hooks when installing the plugin.
  #
  # Example:
  #
  #   def register_hooks
  #     after 'deploy:updated', 'my_plugin:do_something'
  #   end
  #
  def register_hooks; end
    
    desc 'Deploy a new release.'
task :deploy do
  set(:deploying, true)
  %w{ starting started
      updating updated
      publishing published
      finishing finished }.each do |task|
    invoke 'deploy:#{task}'
  end
end
task default: :deploy
