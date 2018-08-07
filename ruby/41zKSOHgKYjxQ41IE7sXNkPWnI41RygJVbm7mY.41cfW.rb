
        
          # POST /resource/confirmation
  def create
    self.resource = resource_class.send_confirmation_instructions(resource_params)
    yield resource if block_given?
    
          def remember_cookie_values(resource)
        options = { httponly: true }
        options.merge!(forget_cookie_values(resource))
        options.merge!(
          value: resource.class.serialize_into_cookie(resource),
          expires: resource.remember_expires_at
        )
      end
    
                  define_method method do |resource_or_scope, *args|
                scope = Devise::Mapping.find_scope!(resource_or_scope)
                router_name = Devise.mappings[scope].router_name
                context = router_name ? send(router_name) : _devise_route_context
                context.send('#{action}#{scope}_#{module_name}_#{path_or_url}', *args)
              end
            end
          end
        end
      end
    
      describe 'DATA_PTR' do
    it 'returns the struct data' do
      a = @s.wrap_struct(1024)
      @s.get_struct_data_ptr(a).should == 1024
    end
  end
end

    
      it 'raises an Errno::ECHILD if there are no child processes' do
    lambda { Process.wait }.should raise_error(Errno::ECHILD)
  end
    
    require 'mkmf'
require File.expand_path('../deprecation', __FILE__)
    
    if !Dir.respond_to?(:mktmpdir)
  # copied from lib/tmpdir.rb
  def Dir.mktmpdir(prefix_suffix=nil, tmpdir=nil)
    case prefix_suffix
    when nil
      prefix = 'd'
      suffix = ''
    when String
      prefix = prefix_suffix
      suffix = ''
    when Array
      prefix = prefix_suffix[0]
      suffix = prefix_suffix[1]
    else
      raise ArgumentError, 'unexpected prefix_suffix: #{prefix_suffix.inspect}'
    end
    tmpdir ||= Dir.tmpdir
    t = Time.now.strftime('%Y%m%d')
    n = nil
    begin
      path = '#{tmpdir}/#{prefix}#{t}-#{$$}-#{rand(0x100000000).to_s(36)}'
      path << '-#{n}' if n
      path << suffix
      Dir.mkdir(path, 0700)
    rescue Errno::EEXIST
      n ||= 0
      n += 1
      retry
    end
    
        nr_threads.times do |i|
      threads[i] = Thread.new do
        mutex.synchronize do
          result << 'C1'
          condvar.wait mutex
          result << 'C2'
        end
      end
    end
    sleep 0.1
    mutex.synchronize do
      result << 'P1'
      condvar.broadcast
      result << 'P2'
    end
    Timeout.timeout(5) do
      nr_threads.times do |i|
        threads[i].join
      end
    end
    
      # test that waiting producers are woken up on close
  def close_wakeup( num_items, num_threads, &qcreate )
    raise 'This test won't work with num_items(#{num_items}) >= num_threads(#{num_threads})' if num_items >= num_threads
    
        assert_equal(tester.sync_waiting.uniq, tester.sync_waiting)
    assert_equal(tester.sync_waiting, [])
  end
end

    
        # Never trust parameters from the scary internet, only allow the white list through.
    def book_params
      params.require(:book).permit(:name)
    end
end

    
            def on_send(node)
          return unless match_call?(node) &&
                        (!node.value_used? || only_truthiness_matters?(node)) &&
                        !(node.parent && node.parent.block_type?)
    
            def on_block(node)
          on_body_of_reduce(node) do |body|
            void_next = body.each_node(:next).find do |n|
              n.children.empty? && parent_block_node(n) == node
            end
    
            private