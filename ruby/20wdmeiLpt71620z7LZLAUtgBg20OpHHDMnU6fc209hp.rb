
        
          private
    
      # Helper for use in before_actions where no authentication is required.
  #
  # Example:
  #   before_action :require_no_authentication, only: :new
  def require_no_authentication
    assert_is_devise_resource!
    return unless is_navigational_format?
    no_input = devise_mapping.no_input_strategies
    
    module Devise
  module Controllers
    # Provide sign in and sign out functionality.
    # Included by default in all controllers.
    module SignInOut
      # Return true if the given scope is signed in session. If no scope given, return
      # true if any scope is signed in. This will run authentication hooks, which may
      # cause exceptions to be thrown from this method; if you simply want to check
      # if a scope has already previously been authenticated without running
      # authentication hooks, you can directly call `warden.authenticated?(scope: scope)`
      def signed_in?(scope=nil)
        [scope || Devise.mappings.keys].flatten.any? do |_scope|
          warden.authenticate?(scope: _scope)
        end
      end
    
    # Each time a record is set we check whether its session has already timed out
# or not, based on last request time. If so, the record is logged out and
# redirected to the sign in page. Also, each time the request comes and the
# record is set, we set the last request time inside its scoped session to
# verify timeout in the following request.
Warden::Manager.after_set_user do |record, warden, options|
  scope = options[:scope]
  env   = warden.request.env
    
          protected
    
            # Generate a token checking if one does not already exist in the database.
        def remember_token #:nodoc:
          loop do
            token = Devise.friendly_token
            break token unless to_adapter.find_first({ remember_token: token })
          end
        end
    
          def timeout_in
        self.class.timeout_in
      end
    
      # :call-seq:
  #   def_single_delegator(accessor, method, new_name=method)
  #
  # Defines a method _method_ which delegates to _accessor_ (i.e. it calls
  # the method of the same name in _accessor_).  If _new_name_ is
  # provided, it is used as the name for the delegate method.
  def def_single_delegator(accessor, method, ali = method)
    gen = Forwardable._delegator_method(self, accessor, method, ali)
    
    require_relative 'nop'
require_relative '../ext/loader'
    
    module IRB
  # A class that wraps the current state of the irb session, including the
  # configuration of IRB.conf.
  class Context
    # Creates a new IRB context.
    #
    # The optional +input_method+ argument:
    #
    # +nil+::     uses stdin or Reidline or Readline
    # +String+::  uses a File
    # +other+::   uses this as InputMethod
    def initialize(irb, workspace = nil, input_method = nil, output_method = nil)
      @irb = irb
      if workspace
        @workspace = workspace
      else
        @workspace = WorkSpace.new
      end
      @thread = Thread.current if defined? Thread
    
      module HistorySavingAbility # :nodoc:
    def HistorySavingAbility.extended(obj)
      IRB.conf[:AT_EXIT].push proc{obj.save_history}
      obj.load_history
      obj
    end