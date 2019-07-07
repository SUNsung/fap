
        
          def serialize_options(resource)
    methods = resource_class.authentication_keys.dup
    methods = methods.keys if methods.is_a?(Hash)
    methods << :password if resource.respond_to?(:password)
    { methods: methods, only: [:password] }
  end
    
      # POST /resource/unlock
  def create
    self.resource = resource_class.send_unlock_instructions(resource_params)
    yield resource if block_given?
    
    module UnpackStrategy
  class Air
    include UnpackStrategy
    
        not_matching_pipeline = described_class.new(source, pipeline_id, [], settings)
    expect(subject).not_to eq(not_matching_pipeline)
    
    def system!(*args)
  system(*args) || abort('\n== Command #{args} failed ==')
end
    
    desc 'Default: run unit tests.'
task :default => [:clean, :all]
    
        private