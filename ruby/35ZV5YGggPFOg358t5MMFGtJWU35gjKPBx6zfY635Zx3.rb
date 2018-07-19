
        
          def resource
    @resource ||=
      if params[:project_id].present?
        Project.find(params[:project_id])
      elsif params[:namespace_id].present?
        Group.find(params[:namespace_id])
      end
  end
    
    if ARGV.count < 2
  abort 'Usage: #$0 pidfile command [args...]'
end
    
        @services = current_user.services.reorder(table_sort).page(params[:page])
    
      # POST /resource/confirmation
  def create
    self.resource = resource_class.send_confirmation_instructions(resource_params)
    yield resource if block_given?
    
      # POST /resource/unlock
  def create
    self.resource = resource_class.send_unlock_instructions(resource_params)
    yield resource if block_given?
    
          html_filters.push 'coffeescript/clean_html_v1', 'coffeescript/entries_v1', 'title'
    
        options[:only] = BOOKS.map { |s| 'book.#{s}.html' }
    
      def text_url
    object.local? ? medium_url(object) : nil
  end
    
      def updated
    object.updated_at.iso8601
  end