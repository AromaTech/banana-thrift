<?php
namespace RedRoma\Aroma\Exceptions;

/**
 * Autogenerated by Thrift Compiler (0.11.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
use Thrift\Base\TBase;
use Thrift\Type\TType;
use Thrift\Type\TMessageType;
use Thrift\Exception\TException;
use Thrift\Exception\TProtocolException;
use Thrift\Protocol\TProtocol;
use Thrift\Protocol\TBinaryProtocolAccelerated;
use Thrift\Exception\TApplicationException;


/**
 * Thrown when the Service receives a Bad or Invalid Argument.
 */
class InvalidArgumentException extends TException {
  static $isValidate = false;

  static $_TSPEC = array(
    1 => array(
      'var' => 'message',
      'isRequired' => false,
      'type' => TType::STRING,
      ),
    );

  /**
   * @var string
   */
  public $message = "Invalid Argument Received";

  public function __construct($vals=null) {
    if (is_array($vals)) {
      if (isset($vals['message'])) {
        $this->message = $vals['message'];
      }
    }
  }

  public function getName() {
    return 'InvalidArgumentException';
  }

  public function read($input)
  {
    $xfer = 0;
    $fname = null;
    $ftype = 0;
    $fid = 0;
    $xfer += $input->readStructBegin($fname);
    while (true)
    {
      $xfer += $input->readFieldBegin($fname, $ftype, $fid);
      if ($ftype == TType::STOP) {
        break;
      }
      switch ($fid)
      {
        case 1:
          if ($ftype == TType::STRING) {
            $xfer += $input->readString($this->message);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        default:
          $xfer += $input->skip($ftype);
          break;
      }
      $xfer += $input->readFieldEnd();
    }
    $xfer += $input->readStructEnd();
    return $xfer;
  }

  public function write($output) {
    $xfer = 0;
    $xfer += $output->writeStructBegin('InvalidArgumentException');
    if ($this->message !== null) {
      $xfer += $output->writeFieldBegin('message', TType::STRING, 1);
      $xfer += $output->writeString($this->message);
      $xfer += $output->writeFieldEnd();
    }
    $xfer += $output->writeFieldStop();
    $xfer += $output->writeStructEnd();
    return $xfer;
  }

}

/**
 * Thrown when a User's credentials did not match up when attempting
 * to Sign In.
 */
class InvalidCredentialsException extends TException {
  static $isValidate = false;

  static $_TSPEC = array(
    1 => array(
      'var' => 'message',
      'isRequired' => false,
      'type' => TType::STRING,
      ),
    );

  /**
   * @var string
   */
  public $message = "Failed to Verify and Authenticate Credentials";

  public function __construct($vals=null) {
    if (is_array($vals)) {
      if (isset($vals['message'])) {
        $this->message = $vals['message'];
      }
    }
  }

  public function getName() {
    return 'InvalidCredentialsException';
  }

  public function read($input)
  {
    $xfer = 0;
    $fname = null;
    $ftype = 0;
    $fid = 0;
    $xfer += $input->readStructBegin($fname);
    while (true)
    {
      $xfer += $input->readFieldBegin($fname, $ftype, $fid);
      if ($ftype == TType::STOP) {
        break;
      }
      switch ($fid)
      {
        case 1:
          if ($ftype == TType::STRING) {
            $xfer += $input->readString($this->message);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        default:
          $xfer += $input->skip($ftype);
          break;
      }
      $xfer += $input->readFieldEnd();
    }
    $xfer += $input->readStructEnd();
    return $xfer;
  }

  public function write($output) {
    $xfer = 0;
    $xfer += $output->writeStructBegin('InvalidCredentialsException');
    if ($this->message !== null) {
      $xfer += $output->writeFieldBegin('message', TType::STRING, 1);
      $xfer += $output->writeString($this->message);
      $xfer += $output->writeFieldEnd();
    }
    $xfer += $output->writeFieldStop();
    $xfer += $output->writeStructEnd();
    return $xfer;
  }

}

/**
 * Thrown when referencing or using an Invalid Token (Application or User).
 */
class InvalidTokenException extends TException {
  static $isValidate = false;

  static $_TSPEC = array(
    1 => array(
      'var' => 'message',
      'isRequired' => false,
      'type' => TType::STRING,
      ),
    );

  /**
   * @var string
   */
  public $message = "The specified token is invalid";

  public function __construct($vals=null) {
    if (is_array($vals)) {
      if (isset($vals['message'])) {
        $this->message = $vals['message'];
      }
    }
  }

  public function getName() {
    return 'InvalidTokenException';
  }

  public function read($input)
  {
    $xfer = 0;
    $fname = null;
    $ftype = 0;
    $fid = 0;
    $xfer += $input->readStructBegin($fname);
    while (true)
    {
      $xfer += $input->readFieldBegin($fname, $ftype, $fid);
      if ($ftype == TType::STOP) {
        break;
      }
      switch ($fid)
      {
        case 1:
          if ($ftype == TType::STRING) {
            $xfer += $input->readString($this->message);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        default:
          $xfer += $input->skip($ftype);
          break;
      }
      $xfer += $input->readFieldEnd();
    }
    $xfer += $input->readStructEnd();
    return $xfer;
  }

  public function write($output) {
    $xfer = 0;
    $xfer += $output->writeStructBegin('InvalidTokenException');
    if ($this->message !== null) {
      $xfer += $output->writeFieldBegin('message', TType::STRING, 1);
      $xfer += $output->writeString($this->message);
      $xfer += $output->writeFieldEnd();
    }
    $xfer += $output->writeFieldStop();
    $xfer += $output->writeStructEnd();
    return $xfer;
  }

}

/**
 * Thrown when trying to create an account that is already registered.
 */
class AccountAlreadyExistsException extends TException {
  static $isValidate = false;

  static $_TSPEC = array(
    1 => array(
      'var' => 'message',
      'isRequired' => false,
      'type' => TType::STRING,
      ),
    );

  /**
   * @var string
   */
  public $message = "This email has already been registered. Reset your password if you forgot it.";

  public function __construct($vals=null) {
    if (is_array($vals)) {
      if (isset($vals['message'])) {
        $this->message = $vals['message'];
      }
    }
  }

  public function getName() {
    return 'AccountAlreadyExistsException';
  }

  public function read($input)
  {
    $xfer = 0;
    $fname = null;
    $ftype = 0;
    $fid = 0;
    $xfer += $input->readStructBegin($fname);
    while (true)
    {
      $xfer += $input->readFieldBegin($fname, $ftype, $fid);
      if ($ftype == TType::STOP) {
        break;
      }
      switch ($fid)
      {
        case 1:
          if ($ftype == TType::STRING) {
            $xfer += $input->readString($this->message);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        default:
          $xfer += $input->skip($ftype);
          break;
      }
      $xfer += $input->readFieldEnd();
    }
    $xfer += $input->readStructEnd();
    return $xfer;
  }

  public function write($output) {
    $xfer = 0;
    $xfer += $output->writeStructBegin('AccountAlreadyExistsException');
    if ($this->message !== null) {
      $xfer += $output->writeFieldBegin('message', TType::STRING, 1);
      $xfer += $output->writeString($this->message);
      $xfer += $output->writeFieldEnd();
    }
    $xfer += $output->writeFieldStop();
    $xfer += $output->writeStructEnd();
    return $xfer;
  }

}

/**
 * Thrown when trying to reset an Account, but the Reset Code provided is invalid.
 */
class InvalidCodeException extends TException {
  static $isValidate = false;

  static $_TSPEC = array(
    1 => array(
      'var' => 'message',
      'isRequired' => false,
      'type' => TType::STRING,
      ),
    );

  /**
   * @var string
   */
  public $message = "The Reset Password is invalid";

  public function __construct($vals=null) {
    if (is_array($vals)) {
      if (isset($vals['message'])) {
        $this->message = $vals['message'];
      }
    }
  }

  public function getName() {
    return 'InvalidCodeException';
  }

  public function read($input)
  {
    $xfer = 0;
    $fname = null;
    $ftype = 0;
    $fid = 0;
    $xfer += $input->readStructBegin($fname);
    while (true)
    {
      $xfer += $input->readFieldBegin($fname, $ftype, $fid);
      if ($ftype == TType::STOP) {
        break;
      }
      switch ($fid)
      {
        case 1:
          if ($ftype == TType::STRING) {
            $xfer += $input->readString($this->message);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        default:
          $xfer += $input->skip($ftype);
          break;
      }
      $xfer += $input->readFieldEnd();
    }
    $xfer += $input->readStructEnd();
    return $xfer;
  }

  public function write($output) {
    $xfer = 0;
    $xfer += $output->writeStructBegin('InvalidCodeException');
    if ($this->message !== null) {
      $xfer += $output->writeFieldBegin('message', TType::STRING, 1);
      $xfer += $output->writeString($this->message);
      $xfer += $output->writeFieldEnd();
    }
    $xfer += $output->writeFieldStop();
    $xfer += $output->writeStructEnd();
    return $xfer;
  }

}

/**
 * Thrown when a Human tries to perform an Operation
 * that only an "Owner" can do.
 */
class UnauthorizedException extends TException {
  static $isValidate = false;

  static $_TSPEC = array(
    1 => array(
      'var' => 'message',
      'isRequired' => false,
      'type' => TType::STRING,
      ),
    );

  /**
   * @var string
   */
  public $message = "Only an Owner can do that";

  public function __construct($vals=null) {
    if (is_array($vals)) {
      if (isset($vals['message'])) {
        $this->message = $vals['message'];
      }
    }
  }

  public function getName() {
    return 'UnauthorizedException';
  }

  public function read($input)
  {
    $xfer = 0;
    $fname = null;
    $ftype = 0;
    $fid = 0;
    $xfer += $input->readStructBegin($fname);
    while (true)
    {
      $xfer += $input->readFieldBegin($fname, $ftype, $fid);
      if ($ftype == TType::STOP) {
        break;
      }
      switch ($fid)
      {
        case 1:
          if ($ftype == TType::STRING) {
            $xfer += $input->readString($this->message);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        default:
          $xfer += $input->skip($ftype);
          break;
      }
      $xfer += $input->readFieldEnd();
    }
    $xfer += $input->readStructEnd();
    return $xfer;
  }

  public function write($output) {
    $xfer = 0;
    $xfer += $output->writeStructBegin('UnauthorizedException');
    if ($this->message !== null) {
      $xfer += $output->writeFieldBegin('message', TType::STRING, 1);
      $xfer += $output->writeString($this->message);
      $xfer += $output->writeFieldEnd();
    }
    $xfer += $output->writeFieldStop();
    $xfer += $output->writeStructEnd();
    return $xfer;
  }

}

/**
 * Thrown when referring to something that does not exist.
 * This is the generic version, and is to be used with things
 * not covered by AppDoesNotExist, UserDoesNotExist, etc.
 */
class DoesNotExistException extends TException {
  static $isValidate = false;

  static $_TSPEC = array(
    1 => array(
      'var' => 'message',
      'isRequired' => false,
      'type' => TType::STRING,
      ),
    );

  /**
   * @var string
   */
  public $message = "The requested resource does not exist";

  public function __construct($vals=null) {
    if (is_array($vals)) {
      if (isset($vals['message'])) {
        $this->message = $vals['message'];
      }
    }
  }

  public function getName() {
    return 'DoesNotExistException';
  }

  public function read($input)
  {
    $xfer = 0;
    $fname = null;
    $ftype = 0;
    $fid = 0;
    $xfer += $input->readStructBegin($fname);
    while (true)
    {
      $xfer += $input->readFieldBegin($fname, $ftype, $fid);
      if ($ftype == TType::STOP) {
        break;
      }
      switch ($fid)
      {
        case 1:
          if ($ftype == TType::STRING) {
            $xfer += $input->readString($this->message);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        default:
          $xfer += $input->skip($ftype);
          break;
      }
      $xfer += $input->readFieldEnd();
    }
    $xfer += $input->readStructEnd();
    return $xfer;
  }

  public function write($output) {
    $xfer = 0;
    $xfer += $output->writeStructBegin('DoesNotExistException');
    if ($this->message !== null) {
      $xfer += $output->writeFieldBegin('message', TType::STRING, 1);
      $xfer += $output->writeString($this->message);
      $xfer += $output->writeFieldEnd();
    }
    $xfer += $output->writeFieldStop();
    $xfer += $output->writeStructEnd();
    return $xfer;
  }

}

/**
 * Thrown when referring to a service that does not exist.
 */
class ApplicationDoesNotExistException extends TException {
  static $isValidate = false;

  static $_TSPEC = array(
    1 => array(
      'var' => 'message',
      'isRequired' => false,
      'type' => TType::STRING,
      ),
    );

  /**
   * @var string
   */
  public $message = "The Specified Application does not exist.";

  public function __construct($vals=null) {
    if (is_array($vals)) {
      if (isset($vals['message'])) {
        $this->message = $vals['message'];
      }
    }
  }

  public function getName() {
    return 'ApplicationDoesNotExistException';
  }

  public function read($input)
  {
    $xfer = 0;
    $fname = null;
    $ftype = 0;
    $fid = 0;
    $xfer += $input->readStructBegin($fname);
    while (true)
    {
      $xfer += $input->readFieldBegin($fname, $ftype, $fid);
      if ($ftype == TType::STOP) {
        break;
      }
      switch ($fid)
      {
        case 1:
          if ($ftype == TType::STRING) {
            $xfer += $input->readString($this->message);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        default:
          $xfer += $input->skip($ftype);
          break;
      }
      $xfer += $input->readFieldEnd();
    }
    $xfer += $input->readStructEnd();
    return $xfer;
  }

  public function write($output) {
    $xfer = 0;
    $xfer += $output->writeStructBegin('ApplicationDoesNotExistException');
    if ($this->message !== null) {
      $xfer += $output->writeFieldBegin('message', TType::STRING, 1);
      $xfer += $output->writeString($this->message);
      $xfer += $output->writeFieldEnd();
    }
    $xfer += $output->writeFieldStop();
    $xfer += $output->writeStructEnd();
    return $xfer;
  }

}

/**
 * Thrown when trying to register a Channel for an Application that
 * has already been registered before, either by the current Person
 * or by someone else.
 */
class ApplicationAlreadyRegisteredException extends TException {
  static $isValidate = false;

  static $_TSPEC = array(
    1 => array(
      'var' => 'message',
      'isRequired' => false,
      'type' => TType::STRING,
      ),
    );

  /**
   * @var string
   */
  public $message = "This Channel has already been registered for this Application.";

  public function __construct($vals=null) {
    if (is_array($vals)) {
      if (isset($vals['message'])) {
        $this->message = $vals['message'];
      }
    }
  }

  public function getName() {
    return 'ApplicationAlreadyRegisteredException';
  }

  public function read($input)
  {
    $xfer = 0;
    $fname = null;
    $ftype = 0;
    $fid = 0;
    $xfer += $input->readStructBegin($fname);
    while (true)
    {
      $xfer += $input->readFieldBegin($fname, $ftype, $fid);
      if ($ftype == TType::STOP) {
        break;
      }
      switch ($fid)
      {
        case 1:
          if ($ftype == TType::STRING) {
            $xfer += $input->readString($this->message);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        default:
          $xfer += $input->skip($ftype);
          break;
      }
      $xfer += $input->readFieldEnd();
    }
    $xfer += $input->readStructEnd();
    return $xfer;
  }

  public function write($output) {
    $xfer = 0;
    $xfer += $output->writeStructBegin('ApplicationAlreadyRegisteredException');
    if ($this->message !== null) {
      $xfer += $output->writeFieldBegin('message', TType::STRING, 1);
      $xfer += $output->writeString($this->message);
      $xfer += $output->writeFieldEnd();
    }
    $xfer += $output->writeFieldStop();
    $xfer += $output->writeStructEnd();
    return $xfer;
  }

}

class UserDoesNotExistException extends TException {
  static $isValidate = false;

  static $_TSPEC = array(
    1 => array(
      'var' => 'message',
      'isRequired' => false,
      'type' => TType::STRING,
      ),
    );

  /**
   * @var string
   */
  public $message = "The User you're referring to does not exist.";

  public function __construct($vals=null) {
    if (is_array($vals)) {
      if (isset($vals['message'])) {
        $this->message = $vals['message'];
      }
    }
  }

  public function getName() {
    return 'UserDoesNotExistException';
  }

  public function read($input)
  {
    $xfer = 0;
    $fname = null;
    $ftype = 0;
    $fid = 0;
    $xfer += $input->readStructBegin($fname);
    while (true)
    {
      $xfer += $input->readFieldBegin($fname, $ftype, $fid);
      if ($ftype == TType::STOP) {
        break;
      }
      switch ($fid)
      {
        case 1:
          if ($ftype == TType::STRING) {
            $xfer += $input->readString($this->message);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        default:
          $xfer += $input->skip($ftype);
          break;
      }
      $xfer += $input->readFieldEnd();
    }
    $xfer += $input->readStructEnd();
    return $xfer;
  }

  public function write($output) {
    $xfer = 0;
    $xfer += $output->writeStructBegin('UserDoesNotExistException');
    if ($this->message !== null) {
      $xfer += $output->writeFieldBegin('message', TType::STRING, 1);
      $xfer += $output->writeString($this->message);
      $xfer += $output->writeFieldEnd();
    }
    $xfer += $output->writeFieldStop();
    $xfer += $output->writeStructEnd();
    return $xfer;
  }

}

/**
 * Thrown when an Application sends too many messages in a short period of time.
 * This helps combat DoS attacks.
 */
class ThroughoutExceededException extends TException {
  static $isValidate = false;

  static $_TSPEC = array(
    1 => array(
      'var' => 'message',
      'isRequired' => false,
      'type' => TType::STRING,
      ),
    );

  /**
   * @var string
   */
  public $message = "You have exceeded your allocated throughput. Buy more or slow down.";

  public function __construct($vals=null) {
    if (is_array($vals)) {
      if (isset($vals['message'])) {
        $this->message = $vals['message'];
      }
    }
  }

  public function getName() {
    return 'ThroughoutExceededException';
  }

  public function read($input)
  {
    $xfer = 0;
    $fname = null;
    $ftype = 0;
    $fid = 0;
    $xfer += $input->readStructBegin($fname);
    while (true)
    {
      $xfer += $input->readFieldBegin($fname, $ftype, $fid);
      if ($ftype == TType::STOP) {
        break;
      }
      switch ($fid)
      {
        case 1:
          if ($ftype == TType::STRING) {
            $xfer += $input->readString($this->message);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        default:
          $xfer += $input->skip($ftype);
          break;
      }
      $xfer += $input->readFieldEnd();
    }
    $xfer += $input->readStructEnd();
    return $xfer;
  }

  public function write($output) {
    $xfer = 0;
    $xfer += $output->writeStructBegin('ThroughoutExceededException');
    if ($this->message !== null) {
      $xfer += $output->writeFieldBegin('message', TType::STRING, 1);
      $xfer += $output->writeString($this->message);
      $xfer += $output->writeFieldEnd();
    }
    $xfer += $output->writeFieldStop();
    $xfer += $output->writeStructEnd();
    return $xfer;
  }

}

/**
 * Thrown when trying to register a Custom AromaChannel, but the Endpoint cannot
 * be reached by Aroma.
 */
class CustomChannelUnreachableException extends TException {
  static $isValidate = false;

  static $_TSPEC = array(
    1 => array(
      'var' => 'message',
      'isRequired' => false,
      'type' => TType::STRING,
      ),
    );

  /**
   * @var string
   */
  public $message = "The Custom Channel you've supplied could not be reached. Please ensure the Application is reachable and operational.";

  public function __construct($vals=null) {
    if (is_array($vals)) {
      if (isset($vals['message'])) {
        $this->message = $vals['message'];
      }
    }
  }

  public function getName() {
    return 'CustomChannelUnreachableException';
  }

  public function read($input)
  {
    $xfer = 0;
    $fname = null;
    $ftype = 0;
    $fid = 0;
    $xfer += $input->readStructBegin($fname);
    while (true)
    {
      $xfer += $input->readFieldBegin($fname, $ftype, $fid);
      if ($ftype == TType::STOP) {
        break;
      }
      switch ($fid)
      {
        case 1:
          if ($ftype == TType::STRING) {
            $xfer += $input->readString($this->message);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        default:
          $xfer += $input->skip($ftype);
          break;
      }
      $xfer += $input->readFieldEnd();
    }
    $xfer += $input->readStructEnd();
    return $xfer;
  }

  public function write($output) {
    $xfer = 0;
    $xfer += $output->writeStructBegin('CustomChannelUnreachableException');
    if ($this->message !== null) {
      $xfer += $output->writeFieldBegin('message', TType::STRING, 1);
      $xfer += $output->writeString($this->message);
      $xfer += $output->writeFieldEnd();
    }
    $xfer += $output->writeFieldStop();
    $xfer += $output->writeStructEnd();
    return $xfer;
  }

}

/**
 * Thrown when referencing a Developer's saved Channel that does not exist.
 */
class ChannelDoesNotExistException extends TException {
  static $isValidate = false;

  static $_TSPEC = array(
    1 => array(
      'var' => 'message',
      'isRequired' => false,
      'type' => TType::STRING,
      ),
    );

  /**
   * @var string
   */
  public $message = "The Channel specified does not exist in the System.";

  public function __construct($vals=null) {
    if (is_array($vals)) {
      if (isset($vals['message'])) {
        $this->message = $vals['message'];
      }
    }
  }

  public function getName() {
    return 'ChannelDoesNotExistException';
  }

  public function read($input)
  {
    $xfer = 0;
    $fname = null;
    $ftype = 0;
    $fid = 0;
    $xfer += $input->readStructBegin($fname);
    while (true)
    {
      $xfer += $input->readFieldBegin($fname, $ftype, $fid);
      if ($ftype == TType::STOP) {
        break;
      }
      switch ($fid)
      {
        case 1:
          if ($ftype == TType::STRING) {
            $xfer += $input->readString($this->message);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        default:
          $xfer += $input->skip($ftype);
          break;
      }
      $xfer += $input->readFieldEnd();
    }
    $xfer += $input->readStructEnd();
    return $xfer;
  }

  public function write($output) {
    $xfer = 0;
    $xfer += $output->writeStructBegin('ChannelDoesNotExistException');
    if ($this->message !== null) {
      $xfer += $output->writeFieldBegin('message', TType::STRING, 1);
      $xfer += $output->writeString($this->message);
      $xfer += $output->writeFieldEnd();
    }
    $xfer += $output->writeFieldStop();
    $xfer += $output->writeStructEnd();
    return $xfer;
  }

}

/**
 * Thrown when referencing a Message that does not exist.
 */
class MessageDoesNotExistException extends TException {
  static $isValidate = false;

  static $_TSPEC = array(
    1 => array(
      'var' => 'message',
      'isRequired' => false,
      'type' => TType::STRING,
      ),
    );

  /**
   * @var string
   */
  public $message = "The Message specified does not exist.";

  public function __construct($vals=null) {
    if (is_array($vals)) {
      if (isset($vals['message'])) {
        $this->message = $vals['message'];
      }
    }
  }

  public function getName() {
    return 'MessageDoesNotExistException';
  }

  public function read($input)
  {
    $xfer = 0;
    $fname = null;
    $ftype = 0;
    $fid = 0;
    $xfer += $input->readStructBegin($fname);
    while (true)
    {
      $xfer += $input->readFieldBegin($fname, $ftype, $fid);
      if ($ftype == TType::STOP) {
        break;
      }
      switch ($fid)
      {
        case 1:
          if ($ftype == TType::STRING) {
            $xfer += $input->readString($this->message);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        default:
          $xfer += $input->skip($ftype);
          break;
      }
      $xfer += $input->readFieldEnd();
    }
    $xfer += $input->readStructEnd();
    return $xfer;
  }

  public function write($output) {
    $xfer = 0;
    $xfer += $output->writeStructBegin('MessageDoesNotExistException');
    if ($this->message !== null) {
      $xfer += $output->writeFieldBegin('message', TType::STRING, 1);
      $xfer += $output->writeString($this->message);
      $xfer += $output->writeFieldEnd();
    }
    $xfer += $output->writeFieldStop();
    $xfer += $output->writeStructEnd();
    return $xfer;
  }

}

/**
 * Thrown when referencing an Organization that does not exist.
 */
class OrganizationDoesNotExistException extends TException {
  static $isValidate = false;

  static $_TSPEC = array(
    1 => array(
      'var' => 'message',
      'isRequired' => false,
      'type' => TType::STRING,
      ),
    );

  /**
   * @var string
   */
  public $message = "The Organization specified does not exist.";

  public function __construct($vals=null) {
    if (is_array($vals)) {
      if (isset($vals['message'])) {
        $this->message = $vals['message'];
      }
    }
  }

  public function getName() {
    return 'OrganizationDoesNotExistException';
  }

  public function read($input)
  {
    $xfer = 0;
    $fname = null;
    $ftype = 0;
    $fid = 0;
    $xfer += $input->readStructBegin($fname);
    while (true)
    {
      $xfer += $input->readFieldBegin($fname, $ftype, $fid);
      if ($ftype == TType::STOP) {
        break;
      }
      switch ($fid)
      {
        case 1:
          if ($ftype == TType::STRING) {
            $xfer += $input->readString($this->message);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        default:
          $xfer += $input->skip($ftype);
          break;
      }
      $xfer += $input->readFieldEnd();
    }
    $xfer += $input->readStructEnd();
    return $xfer;
  }

  public function write($output) {
    $xfer = 0;
    $xfer += $output->writeStructBegin('OrganizationDoesNotExistException');
    if ($this->message !== null) {
      $xfer += $output->writeFieldBegin('message', TType::STRING, 1);
      $xfer += $output->writeString($this->message);
      $xfer += $output->writeFieldEnd();
    }
    $xfer += $output->writeFieldStop();
    $xfer += $output->writeStructEnd();
    return $xfer;
  }

}

/**
 * Thrown when an Operation could not be completed for any reason.
 * This is like a catch-all exception
 */
class OperationFailedException extends TException {
  static $isValidate = false;

  static $_TSPEC = array(
    1 => array(
      'var' => 'message',
      'isRequired' => false,
      'type' => TType::STRING,
      ),
    );

  /**
   * @var string
   */
  public $message = "The Operation could not be completed";

  public function __construct($vals=null) {
    if (is_array($vals)) {
      if (isset($vals['message'])) {
        $this->message = $vals['message'];
      }
    }
  }

  public function getName() {
    return 'OperationFailedException';
  }

  public function read($input)
  {
    $xfer = 0;
    $fname = null;
    $ftype = 0;
    $fid = 0;
    $xfer += $input->readStructBegin($fname);
    while (true)
    {
      $xfer += $input->readFieldBegin($fname, $ftype, $fid);
      if ($ftype == TType::STOP) {
        break;
      }
      switch ($fid)
      {
        case 1:
          if ($ftype == TType::STRING) {
            $xfer += $input->readString($this->message);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        default:
          $xfer += $input->skip($ftype);
          break;
      }
      $xfer += $input->readFieldEnd();
    }
    $xfer += $input->readStructEnd();
    return $xfer;
  }

  public function write($output) {
    $xfer = 0;
    $xfer += $output->writeStructBegin('OperationFailedException');
    if ($this->message !== null) {
      $xfer += $output->writeFieldBegin('message', TType::STRING, 1);
      $xfer += $output->writeString($this->message);
      $xfer += $output->writeFieldEnd();
    }
    $xfer += $output->writeFieldStop();
    $xfer += $output->writeStructEnd();
    return $xfer;
  }

}


